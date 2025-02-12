#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "airquality.h"
#include "weathericon.h"

#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QMouseEvent>
#include <QNetworkAccessManager>
#include <QNetworkReply>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setFixedSize(960,640);

    this->setWindowFlags(Qt::FramelessWindowHint);

    this->setCentralWidget(ui->widget);

    //背景
    ui->widget->setStyleSheet(
        "background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, "
        "stop:0 rgb(52, 103, 155), stop:1 rgb(0, 149, 223))");
    //设置子组件为圆角
    setStyleSheet("QWidget#widget *{ border-radius: 10px; color:rgb(255, 255, 255) }");

    //设置lineEdit
    ui->lineEdit->setStyleSheet("background-color:white; color:black");
    ui->lineEdit->setPlaceholderText("城市");

    //风向、PM2.5、湿度、空气质量
    ui->widget_info->setStyleSheet("background-color: rgb(160, 160, 240)");

    ui->label_windPic->setPixmap(QPixmap(":/picture/风力.png").scaled(60,60));
    ui->label_windPic->setScaledContents(true);

    ui->label_PM25Pic->setPixmap(QPixmap(":/picture/PM2.5.png").scaled(60,60));
    ui->label_PM25Pic->setScaledContents(true);

    ui->label_humidityPic->setPixmap(QPixmap(":/picture/空气湿度.png").scaled(60,60));
    ui->label_humidityPic->setScaledContents(true);

    ui->label_qualityPic->setPixmap(QPixmap(":/picture/空气质量.png").scaled(60,60));
    ui->label_qualityPic->setScaledContents(true);

    //设置为透明
    ui->widget_date->setStyleSheet("background-color:transparent");
    ui->widget_weather->setStyleSheet("background-color:transparent");
    ui->widget_show->setStyleSheet("*{background-color:transparent}"
                                   "QLabel { font: 12pt }");
    ui->plainTextEdit->setStyleSheet("background-color:transparent");

    //设置背景色
    ui->widget_1->setStyleSheet("QLabel { background-color:rgb(16, 201, 211) }");
    ui->widget_5->setStyleSheet("QLabel { background-color:rgba(100, 100, 100, 100) }");

    //最小化、关闭
    connect(ui->pushButton_quit,&QAbstractButton::clicked,this,&QMainWindow::close);
    connect(ui->pushButton_min,&QAbstractButton::clicked,this,&QMainWindow::showMinimized);

    //HTTP请求
    manager = new QNetworkAccessManager(this);  //创建QNetworkAccessManager对象
    QUrl url("http://t.weather.itboy.net/api/weather/city/101010100");  //北京市
    QNetworkRequest request(url);  //设置请求的URL
    reply = manager->get(request);  //发送GET请求

    //连接finished信号处理响应
    connect(reply, &QNetworkReply::finished, this, &MainWindow::onRequestFinished);

    //读取citykey.json文件
    QFile jsonFile("./citykey.json");
    if(jsonFile.open(QIODevice::ReadOnly))
        m_cityData = jsonFile.readAll();
    jsonFile.close();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//让窗口随鼠标拖拽而移动
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        m_isDragging = true;
        m_mouseStartPos = event->globalPosition();
        m_windowStartPos = this->geometry().topLeft();
        event->accept();
    }
    else
        QMainWindow::mousePressEvent(event);
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton){
        m_isDragging = false;
        event->accept();
    }
    else
        QMainWindow::mouseReleaseEvent(event);
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton && m_isDragging){
        QPointF distance = event->globalPosition() - m_mouseStartPos;
        this->move((m_windowStartPos + distance).toPoint());
        event->accept();
    }
    else
        QMainWindow::mouseMoveEvent(event);
}

//读取响应数据
void MainWindow::onRequestFinished()
{
    if(reply->error() == QNetworkReply::NoError){
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        if (!jsonDoc.isNull() && jsonDoc.isObject()) {
            QJsonObject jsonObj = jsonDoc.object();
            parseJson(jsonObj);
        }
        reply->deleteLater();  //释放reply对象
        reply = nullptr;       //置空指针
    }
}

void MainWindow::parseJson(QJsonObject &jsonObj)
{
    //today
    // QString date;
    QString date = jsonObj["date"].toString();
    today.date = date.left(4)+"/"+date.mid(4,2)+"/"+date.right(2);

    // QString temperature;
    QJsonObject jsonData = jsonObj["data"].toObject();
    qfloat16 temperature = jsonData["wendu"].toString().toDouble();
    today.temperature = QString("%1").arg(temperature,0,'f',0);

    // int PM25;
    today.PM25 =jsonData["pm25"].toInt();
    // QString humidity;
    today.humidity =jsonData["shidu"].toString();
    // QString quality;
    today.quality =jsonData["quality"].toString();

    // QString week;
    QJsonArray jsonForecast = jsonData["forecast"].toArray();
    QJsonObject jsonToday = jsonForecast[0].toObject();
    today.week = jsonToday["week"].toString();

    // QString low;
    QString low = jsonToday["low"].toString();
    QStringList parts1 = low.split(' ');
    today.low = parts1.back();
    // QString high;
    QString high = jsonToday["high"].toString();
    QStringList parts2 = high.split(' ');
    today.high = parts2.back();

    // QString tips;
    today.tips = jsonToday["notice"].toString();
    // QString weather;
    today.weather = jsonToday["type"].toString();

    // QString wind;
    today.wind = jsonToday["fx"].toString();
    // QString power;
    today.power = jsonToday["fl"].toString();

    // QString city;
    QJsonObject jsonCityInfo = jsonObj["cityInfo"].toObject();
    today.city = jsonCityInfo["city"].toString();


    //EveryDay
    for(int i=0;i<7;i++){
        QJsonObject jsonDay = jsonForecast[i].toObject();

        // QString date;
        QString str = jsonDay["ymd"].toString();
        QString date = str.right(5);
        everyDay[i].date = date.replace('-','/');
        // QString week;
        everyDay[i].week = jsonDay["week"].toString();
        // QString weather;
        everyDay[i].weather = jsonDay["type"].toString();
        // QString wind;
        everyDay[i].wind = jsonDay["fx"].toString();
        // QString power;
        everyDay[i].power = jsonDay["fl"].toString();

        // QString low;
        QString low = jsonDay["low"].toString();
        QStringList parts1 = low.split(' ');
        everyDay[i].low = parts1.back();
        // QString high;
        QString high = jsonDay["high"].toString();
        QStringList parts2 = high.split(' ');
        everyDay[i].high = parts2.back();

        // int quality;
        everyDay[i].quality = jsonDay["aqi"].toInt();
    }

    updateUi();
}

void MainWindow::updateUi()
{
    //today
    ui->label_datetime->setText(today.date);
    ui->label_week->setText(today.week);
    ui->label_curtemperature->setText(today.temperature);
    ui->label_weatherText->setText(today.weather);
    ui->label_temperature->setText(today.low+" ~ "+today.high);
    ui->label_city->setText(today.city);
    ui->label_wind->setText(today.wind);
    ui->label_windPower->setText(today.power);
    ui->label_PM25->setText(QString::number(today.PM25));
    ui->label_humidity->setText(today.humidity);
    ui->label_quality->setText(today.quality);
    ui->plainTextEdit->setPlainText(today.tips);

    //everyday
    ui->label_day0->setText(everyDay[0].date+"\n"+"今天");
    ui->label_day1->setText(everyDay[1].date+"\n"+"明天");
    ui->label_day2->setText(everyDay[2].date+"\n"+everyDay[2].week);
    ui->label_day3->setText(everyDay[3].date+"\n"+everyDay[3].week);
    ui->label_day4->setText(everyDay[4].date+"\n"+everyDay[4].week);
    ui->label_day5->setText(everyDay[5].date+"\n"+everyDay[5].week);
    ui->label_day6->setText(everyDay[6].date+"\n"+everyDay[6].week);

    ui->label_dayText0->setText(everyDay[0].weather);
    ui->label_dayText1->setText(everyDay[1].weather);
    ui->label_dayText2->setText(everyDay[2].weather);
    ui->label_dayText3->setText(everyDay[3].weather);
    ui->label_dayText4->setText(everyDay[4].weather);
    ui->label_dayText5->setText(everyDay[5].weather);
    ui->label_dayText6->setText(everyDay[6].weather);

    ui->label_dayWind0->setText(everyDay[0].wind+"\n"+everyDay[0].power);
    ui->label_dayWind1->setText(everyDay[1].wind+"\n"+everyDay[1].power);
    ui->label_dayWind2->setText(everyDay[2].wind+"\n"+everyDay[2].power);
    ui->label_dayWind3->setText(everyDay[3].wind+"\n"+everyDay[3].power);
    ui->label_dayWind4->setText(everyDay[4].wind+"\n"+everyDay[4].power);
    ui->label_dayWind5->setText(everyDay[5].wind+"\n"+everyDay[5].power);
    ui->label_dayWind6->setText(everyDay[6].wind+"\n"+everyDay[6].power);

    ui->label_dayQuality0->setText(QString::number(everyDay[0].quality));
    ui->label_dayQuality1->setText(QString::number(everyDay[1].quality));
    ui->label_dayQuality2->setText(QString::number(everyDay[2].quality));
    ui->label_dayQuality3->setText(QString::number(everyDay[3].quality));
    ui->label_dayQuality4->setText(QString::number(everyDay[4].quality));
    ui->label_dayQuality5->setText(QString::number(everyDay[5].quality));
    ui->label_dayQuality6->setText(QString::number(everyDay[6].quality));

    AirQuality airQuality;
    airQuality.mapQuality(ui->label_dayQuality0);
    airQuality.mapQuality(ui->label_dayQuality1);
    airQuality.mapQuality(ui->label_dayQuality2);
    airQuality.mapQuality(ui->label_dayQuality3);
    airQuality.mapQuality(ui->label_dayQuality4);
    airQuality.mapQuality(ui->label_dayQuality5);
    airQuality.mapQuality(ui->label_dayQuality6);

    WeatherIcon weatherIcon;
    weatherIcon.mapIcon(ui->label_dayText0,ui->label_dayPic0);
    weatherIcon.mapIcon(ui->label_dayText1,ui->label_dayPic1);
    weatherIcon.mapIcon(ui->label_dayText2,ui->label_dayPic2);
    weatherIcon.mapIcon(ui->label_dayText3,ui->label_dayPic3);
    weatherIcon.mapIcon(ui->label_dayText4,ui->label_dayPic4);
    weatherIcon.mapIcon(ui->label_dayText5,ui->label_dayPic5);
    weatherIcon.mapIcon(ui->label_dayText6,ui->label_dayPic6);

    QString pix = weatherIcon.mapIcon(ui->label_weatherText,ui->label_weatherPic);
    ui->label_weatherPic->setPixmap(QPixmap(pix).scaled(130,130));

    qfloat16 dis = ui->widget_3->width()/7.0;
    QVector<QPointF> dataHigh;
    for(int i=0; i<7; i++){
        QStringList str = everyDay[i].high.split(u'℃');
        dataHigh.append({dis*i,str.begin()->toDouble()});
    }

    QVector<QPointF> dataLow;
    for(int i=0; i<7; i++){
        QStringList str = everyDay[i].low.split(u'℃');
        dataLow.append({dis*i,str.begin()->toDouble()});
    }
    ui->widget_3->setTemperatureData(dataHigh,dataLow);
}

//查询不同城市天气
void MainWindow::findCity()
{
    QJsonDocument jsonDoc = QJsonDocument::fromJson(m_cityData);
    QJsonObject jsonObj = jsonDoc.object();
    QString cityCode = jsonObj[ui->lineEdit->text()].toString().right(9);
    if(!ui->lineEdit->text().contains("市"))
        cityCode = jsonObj[ui->lineEdit->text()+"市"].toString().right(9);

    //设置URL,发送GET请求
    QUrl url("http://t.weather.itboy.net/api/weather/city/"+cityCode);
    QNetworkRequest request(url);
    reply = manager->get(request);
    connect(reply, &QNetworkReply::finished, this, &MainWindow::onRequestFinished);
}

void MainWindow::on_pushButton_seek_clicked()
{
    findCity();
}

void MainWindow::on_lineEdit_editingFinished()
{
    findCity();
}

