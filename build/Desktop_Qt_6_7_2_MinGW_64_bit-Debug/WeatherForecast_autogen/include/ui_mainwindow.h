/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <temperaturewidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_weather;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEdit;
    QPushButton *pushButton_seek;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_weatherPic;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_curtemperature;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_city;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_weatherText;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_temperature;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_info;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_windPic;
    QVBoxLayout *verticalLayout;
    QLabel *label_wind;
    QLabel *label_windPower;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_qualityPic;
    QVBoxLayout *verticalLayout_4;
    QLabel *quality;
    QLabel *label_quality;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_PM25Pic;
    QVBoxLayout *verticalLayout_2;
    QLabel *PM25;
    QLabel *label_PM25;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_humidityPic;
    QVBoxLayout *verticalLayout_3;
    QLabel *humidity;
    QLabel *label_humidity;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout_33;
    QHBoxLayout *horizontalLayout_8;
    QWidget *widget_date;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_quit;
    QPushButton *pushButton_min;
    QLabel *label_week;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_datetime;
    QWidget *widget_show;
    QVBoxLayout *verticalLayout_31;
    QWidget *widget_1;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_day0;
    QLabel *label_day1;
    QLabel *label_day2;
    QLabel *label_day3;
    QLabel *label_day4;
    QLabel *label_day5;
    QLabel *label_day6;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_dayPic0;
    QLabel *label_dayText0;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_dayPic1;
    QLabel *label_dayText1;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_dayPic2;
    QLabel *label_dayText2;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_dayPic3;
    QLabel *label_dayText3;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_dayPic4;
    QLabel *label_dayText4;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_dayPic5;
    QLabel *label_dayText5;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_dayPic6;
    QLabel *label_dayText6;
    TemperatureWidget *widget_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_dayQuality0;
    QLabel *label_dayQuality1;
    QLabel *label_dayQuality2;
    QLabel *label_dayQuality3;
    QLabel *label_dayQuality4;
    QLabel *label_dayQuality5;
    QLabel *label_dayQuality6;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_dayWind0;
    QLabel *label_dayWind1;
    QLabel *label_dayWind2;
    QLabel *label_dayWind3;
    QLabel *label_dayWind4;
    QLabel *label_dayWind5;
    QLabel *label_dayWind6;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(700, 533);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picture/\346\231\264\350\275\254\345\244\232\344\272\221\357\274\210\347\231\275\345\244\251\357\274\211.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setAutoFillBackground(false);
        horizontalLayout_15 = new QHBoxLayout(widget);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(10, -1, -1, 10);
        widget_weather = new QWidget(widget);
        widget_weather->setObjectName("widget_weather");
        verticalLayout_9 = new QVBoxLayout(widget_weather);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, -1, 0, -1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        lineEdit = new QLineEdit(widget_weather);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_7->addWidget(lineEdit);

        pushButton_seek = new QPushButton(widget_weather);
        pushButton_seek->setObjectName("pushButton_seek");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        pushButton_seek->setIcon(icon1);

        horizontalLayout_7->addWidget(pushButton_seek);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);


        verticalLayout_9->addLayout(horizontalLayout_7);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_weatherPic = new QLabel(widget_weather);
        label_weatherPic->setObjectName("label_weatherPic");

        verticalLayout_7->addWidget(label_weatherPic);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);


        horizontalLayout_14->addLayout(verticalLayout_7);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(10, -1, -1, -1);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_curtemperature = new QLabel(widget_weather);
        label_curtemperature->setObjectName("label_curtemperature");
        QFont font;
        font.setPointSize(48);
        label_curtemperature->setFont(font);
        label_curtemperature->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);

        horizontalLayout_9->addWidget(label_curtemperature);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_city = new QLabel(widget_weather);
        label_city->setObjectName("label_city");
        QFont font1;
        font1.setPointSize(16);
        label_city->setFont(font1);
        label_city->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTop|Qt::AlignmentFlag::AlignTrailing);

        verticalLayout_5->addWidget(label_city);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(widget_weather);
        label->setObjectName("label");
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignBottom|Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft);
        label->setMargin(10);

        horizontalLayout_6->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_6);


        horizontalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(10, -1, -1, -1);
        label_weatherText = new QLabel(widget_weather);
        label_weatherText->setObjectName("label_weatherText");
        QFont font2;
        font2.setPointSize(18);
        label_weatherText->setFont(font2);

        horizontalLayout_5->addWidget(label_weatherText);

        horizontalSpacer_3 = new QSpacerItem(40, 10, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_temperature = new QLabel(widget_weather);
        label_temperature->setObjectName("label_temperature");
        QFont font3;
        font3.setPointSize(14);
        label_temperature->setFont(font3);

        horizontalLayout_5->addWidget(label_temperature);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_5);


        horizontalLayout_14->addLayout(verticalLayout_6);


        verticalLayout_9->addLayout(horizontalLayout_14);


        verticalLayout_8->addWidget(widget_weather);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayout_8->addItem(verticalSpacer);

        plainTextEdit = new QPlainTextEdit(widget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setEnabled(false);
        QFont font4;
        font4.setPointSize(12);
        plainTextEdit->setFont(font4);
        plainTextEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);

        verticalLayout_8->addWidget(plainTextEdit);

        widget_info = new QWidget(widget);
        widget_info->setObjectName("widget_info");
        gridLayout_2 = new QGridLayout(widget_info);
        gridLayout_2->setSpacing(40);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(40, 20, 40, 40);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName("horizontalLayout");
        label_windPic = new QLabel(widget_info);
        label_windPic->setObjectName("label_windPic");
        label_windPic->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_windPic);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_wind = new QLabel(widget_info);
        label_wind->setObjectName("label_wind");
        label_wind->setFont(font3);
        label_wind->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_wind);

        label_windPower = new QLabel(widget_info);
        label_windPower->setObjectName("label_windPower");
        label_windPower->setFont(font3);
        label_windPower->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(label_windPower);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_qualityPic = new QLabel(widget_info);
        label_qualityPic->setObjectName("label_qualityPic");
        label_qualityPic->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_4->addWidget(label_qualityPic);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        quality = new QLabel(widget_info);
        quality->setObjectName("quality");
        quality->setFont(font3);
        quality->setAlignment(Qt::AlignmentFlag::AlignCenter);
        quality->setMargin(3);

        verticalLayout_4->addWidget(quality);

        label_quality = new QLabel(widget_info);
        label_quality->setObjectName("label_quality");
        label_quality->setFont(font3);
        label_quality->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_4->addWidget(label_quality);


        horizontalLayout_4->addLayout(verticalLayout_4);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_PM25Pic = new QLabel(widget_info);
        label_PM25Pic->setObjectName("label_PM25Pic");
        label_PM25Pic->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_PM25Pic);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        PM25 = new QLabel(widget_info);
        PM25->setObjectName("PM25");
        PM25->setFont(font3);
        PM25->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(PM25);

        label_PM25 = new QLabel(widget_info);
        label_PM25->setObjectName("label_PM25");
        label_PM25->setFont(font3);
        label_PM25->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(label_PM25);


        horizontalLayout_2->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_humidityPic = new QLabel(widget_info);
        label_humidityPic->setObjectName("label_humidityPic");
        label_humidityPic->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_3->addWidget(label_humidityPic);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        humidity = new QLabel(widget_info);
        humidity->setObjectName("humidity");
        humidity->setFont(font3);
        humidity->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(humidity);

        label_humidity = new QLabel(widget_info);
        label_humidity->setObjectName("label_humidity");
        label_humidity->setFont(font3);
        label_humidity->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_3->addWidget(label_humidity);


        horizontalLayout_3->addLayout(verticalLayout_3);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        verticalLayout_8->addWidget(widget_info);

        verticalLayout_8->setStretch(0, 3);
        verticalLayout_8->setStretch(1, 1);
        verticalLayout_8->setStretch(2, 1);
        verticalLayout_8->setStretch(3, 3);

        horizontalLayout_15->addLayout(verticalLayout_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);

        verticalLayout_33 = new QVBoxLayout();
        verticalLayout_33->setObjectName("verticalLayout_33");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        widget_date = new QWidget(widget);
        widget_date->setObjectName("widget_date");
        gridLayout_4 = new QGridLayout(widget_date);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(-1, -1, -1, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        pushButton_quit = new QPushButton(widget_date);
        pushButton_quit->setObjectName("pushButton_quit");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::ApplicationExit));
        pushButton_quit->setIcon(icon2);

        gridLayout_3->addWidget(pushButton_quit, 0, 4, 1, 1);

        pushButton_min = new QPushButton(widget_date);
        pushButton_min->setObjectName("pushButton_min");
        QIcon icon3(QIcon::fromTheme(QIcon::ThemeIcon::ListRemove));
        pushButton_min->setIcon(icon3);

        gridLayout_3->addWidget(pushButton_min, 0, 3, 1, 1);

        label_week = new QLabel(widget_date);
        label_week->setObjectName("label_week");
        QFont font5;
        font5.setPointSize(20);
        label_week->setFont(font5);
        label_week->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_3->addWidget(label_week, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(58, 58, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        label_datetime = new QLabel(widget_date);
        label_datetime->setObjectName("label_datetime");
        label_datetime->setFont(font5);
        label_datetime->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_datetime->setMargin(20);

        gridLayout_3->addWidget(label_datetime, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);


        horizontalLayout_8->addWidget(widget_date);


        verticalLayout_33->addLayout(horizontalLayout_8);

        widget_show = new QWidget(widget);
        widget_show->setObjectName("widget_show");
        verticalLayout_31 = new QVBoxLayout(widget_show);
        verticalLayout_31->setObjectName("verticalLayout_31");
        verticalLayout_31->setContentsMargins(-1, 0, -1, -1);
        widget_1 = new QWidget(widget_show);
        widget_1->setObjectName("widget_1");
        horizontalLayout_10 = new QHBoxLayout(widget_1);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, -1, 0, -1);
        label_day0 = new QLabel(widget_1);
        label_day0->setObjectName("label_day0");
        label_day0->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_day0->setWordWrap(true);

        horizontalLayout_10->addWidget(label_day0);

        label_day1 = new QLabel(widget_1);
        label_day1->setObjectName("label_day1");
        label_day1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_day1);

        label_day2 = new QLabel(widget_1);
        label_day2->setObjectName("label_day2");
        label_day2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_day2);

        label_day3 = new QLabel(widget_1);
        label_day3->setObjectName("label_day3");
        label_day3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_day3);

        label_day4 = new QLabel(widget_1);
        label_day4->setObjectName("label_day4");
        label_day4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_day4);

        label_day5 = new QLabel(widget_1);
        label_day5->setObjectName("label_day5");
        label_day5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_day5);

        label_day6 = new QLabel(widget_1);
        label_day6->setObjectName("label_day6");
        label_day6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_10->addWidget(label_day6);


        verticalLayout_31->addWidget(widget_1);

        widget_2 = new QWidget(widget_show);
        widget_2->setObjectName("widget_2");
        horizontalLayout_11 = new QHBoxLayout(widget_2);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_dayPic0 = new QLabel(widget_2);
        label_dayPic0->setObjectName("label_dayPic0");
        label_dayPic0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label_dayPic0);

        label_dayText0 = new QLabel(widget_2);
        label_dayText0->setObjectName("label_dayText0");
        label_dayText0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_13->addWidget(label_dayText0);


        horizontalLayout_11->addLayout(verticalLayout_13);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName("verticalLayout_14");
        label_dayPic1 = new QLabel(widget_2);
        label_dayPic1->setObjectName("label_dayPic1");
        label_dayPic1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(label_dayPic1);

        label_dayText1 = new QLabel(widget_2);
        label_dayText1->setObjectName("label_dayText1");
        label_dayText1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_14->addWidget(label_dayText1);


        horizontalLayout_11->addLayout(verticalLayout_14);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_dayPic2 = new QLabel(widget_2);
        label_dayPic2->setObjectName("label_dayPic2");
        label_dayPic2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(label_dayPic2);

        label_dayText2 = new QLabel(widget_2);
        label_dayText2->setObjectName("label_dayText2");
        label_dayText2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_15->addWidget(label_dayText2);


        horizontalLayout_11->addLayout(verticalLayout_15);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setObjectName("verticalLayout_16");
        label_dayPic3 = new QLabel(widget_2);
        label_dayPic3->setObjectName("label_dayPic3");
        label_dayPic3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(label_dayPic3);

        label_dayText3 = new QLabel(widget_2);
        label_dayText3->setObjectName("label_dayText3");
        label_dayText3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_16->addWidget(label_dayText3);


        horizontalLayout_11->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setObjectName("verticalLayout_17");
        label_dayPic4 = new QLabel(widget_2);
        label_dayPic4->setObjectName("label_dayPic4");
        label_dayPic4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_dayPic4);

        label_dayText4 = new QLabel(widget_2);
        label_dayText4->setObjectName("label_dayText4");
        label_dayText4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_17->addWidget(label_dayText4);


        horizontalLayout_11->addLayout(verticalLayout_17);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setObjectName("verticalLayout_18");
        label_dayPic5 = new QLabel(widget_2);
        label_dayPic5->setObjectName("label_dayPic5");
        label_dayPic5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(label_dayPic5);

        label_dayText5 = new QLabel(widget_2);
        label_dayText5->setObjectName("label_dayText5");
        label_dayText5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_18->addWidget(label_dayText5);


        horizontalLayout_11->addLayout(verticalLayout_18);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName("verticalLayout_19");
        label_dayPic6 = new QLabel(widget_2);
        label_dayPic6->setObjectName("label_dayPic6");
        label_dayPic6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(label_dayPic6);

        label_dayText6 = new QLabel(widget_2);
        label_dayText6->setObjectName("label_dayText6");
        label_dayText6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_19->addWidget(label_dayText6);


        horizontalLayout_11->addLayout(verticalLayout_19);


        verticalLayout_31->addWidget(widget_2);

        widget_3 = new TemperatureWidget(widget_show);
        widget_3->setObjectName("widget_3");

        verticalLayout_31->addWidget(widget_3);

        widget_4 = new QWidget(widget_show);
        widget_4->setObjectName("widget_4");
        horizontalLayout_12 = new QHBoxLayout(widget_4);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(6, 0, 6, 0);
        label_dayQuality0 = new QLabel(widget_4);
        label_dayQuality0->setObjectName("label_dayQuality0");
        label_dayQuality0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality0);

        label_dayQuality1 = new QLabel(widget_4);
        label_dayQuality1->setObjectName("label_dayQuality1");
        label_dayQuality1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality1);

        label_dayQuality2 = new QLabel(widget_4);
        label_dayQuality2->setObjectName("label_dayQuality2");
        label_dayQuality2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality2);

        label_dayQuality3 = new QLabel(widget_4);
        label_dayQuality3->setObjectName("label_dayQuality3");
        label_dayQuality3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality3);

        label_dayQuality4 = new QLabel(widget_4);
        label_dayQuality4->setObjectName("label_dayQuality4");
        label_dayQuality4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality4);

        label_dayQuality5 = new QLabel(widget_4);
        label_dayQuality5->setObjectName("label_dayQuality5");
        label_dayQuality5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality5);

        label_dayQuality6 = new QLabel(widget_4);
        label_dayQuality6->setObjectName("label_dayQuality6");
        label_dayQuality6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_12->addWidget(label_dayQuality6);


        verticalLayout_31->addWidget(widget_4);

        widget_5 = new QWidget(widget_show);
        widget_5->setObjectName("widget_5");
        horizontalLayout_13 = new QHBoxLayout(widget_5);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_dayWind0 = new QLabel(widget_5);
        label_dayWind0->setObjectName("label_dayWind0");
        label_dayWind0->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind0);

        label_dayWind1 = new QLabel(widget_5);
        label_dayWind1->setObjectName("label_dayWind1");
        label_dayWind1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind1);

        label_dayWind2 = new QLabel(widget_5);
        label_dayWind2->setObjectName("label_dayWind2");
        label_dayWind2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind2);

        label_dayWind3 = new QLabel(widget_5);
        label_dayWind3->setObjectName("label_dayWind3");
        label_dayWind3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind3);

        label_dayWind4 = new QLabel(widget_5);
        label_dayWind4->setObjectName("label_dayWind4");
        label_dayWind4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind4);

        label_dayWind5 = new QLabel(widget_5);
        label_dayWind5->setObjectName("label_dayWind5");
        label_dayWind5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind5);

        label_dayWind6 = new QLabel(widget_5);
        label_dayWind6->setObjectName("label_dayWind6");
        label_dayWind6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_13->addWidget(label_dayWind6);


        verticalLayout_31->addWidget(widget_5);

        verticalLayout_31->setStretch(0, 2);
        verticalLayout_31->setStretch(1, 2);
        verticalLayout_31->setStretch(2, 5);
        verticalLayout_31->setStretch(3, 1);
        verticalLayout_31->setStretch(4, 1);

        verticalLayout_33->addWidget(widget_show);

        verticalLayout_33->setStretch(0, 1);
        verticalLayout_33->setStretch(1, 10);

        horizontalLayout_15->addLayout(verticalLayout_33);

        horizontalLayout_15->setStretch(0, 8);
        horizontalLayout_15->setStretch(1, 1);
        horizontalLayout_15->setStretch(2, 10);

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_seek->setText(QString());
        label_weatherPic->setText(QString());
        label_curtemperature->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        label_city->setText(QCoreApplication::translate("MainWindow", "\345\214\227\344\272\254\345\270\202", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\342\204\203", nullptr));
        label_weatherText->setText(QCoreApplication::translate("MainWindow", "\345\244\232\344\272\221", nullptr));
        label_temperature->setText(QCoreApplication::translate("MainWindow", "19-31", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "notice\n"
"", nullptr));
        label_windPic->setText(QString());
        label_wind->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221", nullptr));
        label_windPower->setText(QCoreApplication::translate("MainWindow", "3\347\272\247", nullptr));
        label_qualityPic->setText(QString());
        quality->setText(QCoreApplication::translate("MainWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        label_quality->setText(QCoreApplication::translate("MainWindow", "\344\274\230", nullptr));
        label_PM25Pic->setText(QString());
        PM25->setText(QCoreApplication::translate("MainWindow", "PM2.5", nullptr));
        label_PM25->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        label_humidityPic->setText(QString());
        humidity->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        label_humidity->setText(QCoreApplication::translate("MainWindow", "60%", nullptr));
        pushButton_quit->setText(QString());
        pushButton_min->setText(QString());
        label_week->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_datetime->setText(QCoreApplication::translate("MainWindow", "2025/02/10", nullptr));
        label_day0->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_day1->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_day2->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_day3->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_day4->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_day5->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_day6->setText(QCoreApplication::translate("MainWindow", "\346\230\237\346\234\237\344\270\200", nullptr));
        label_dayPic0->setText(QString());
        label_dayText0->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayPic1->setText(QString());
        label_dayText1->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayPic2->setText(QString());
        label_dayText2->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayPic3->setText(QString());
        label_dayText3->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayPic4->setText(QString());
        label_dayText4->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayPic5->setText(QString());
        label_dayText5->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayPic6->setText(QString());
        label_dayText6->setText(QCoreApplication::translate("MainWindow", "\346\231\264", nullptr));
        label_dayQuality0->setText(QString());
        label_dayQuality1->setText(QString());
        label_dayQuality2->setText(QString());
        label_dayQuality3->setText(QString());
        label_dayQuality4->setText(QString());
        label_dayQuality5->setText(QString());
        label_dayQuality6->setText(QString());
        label_dayWind0->setText(QString());
        label_dayWind1->setText(QString());
        label_dayWind2->setText(QString());
        label_dayWind3->setText(QString());
        label_dayWind4->setText(QString());
        label_dayWind5->setText(QString());
        label_dayWind6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
