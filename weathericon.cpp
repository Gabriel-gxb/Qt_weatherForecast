#include "weathericon.h"

#include <QLabel>

WeatherIcon::WeatherIcon() {}

QString WeatherIcon::mapIcon(QLabel *labelText, QLabel *labelPic)
{
    QString pix;
    if(labelText->text().contains("雪")){
        labelPic->setPixmap(QPixmap(":/picture/大雪.png").scaled(40,40));
        pix = ":/picture/大雪.png";
    }
    else if(labelText->text().contains("雨")){
        labelPic->setPixmap(QPixmap(":/picture/大雨.png").scaled(40,40));
        pix = ":/picture/大雨.png";
    }
    else if(labelText->text().contains("沙尘暴") || labelText->text() == "浮沉"){
        labelPic->setPixmap(QPixmap(":/picture/沙尘暴.png").scaled(40,40));
        pix = ":/picture/沙尘暴.png";
    }
    else if(labelText->text() == "雾" || labelText->text() == "霾"){
        labelPic->setPixmap(QPixmap(":/picture/雾霾.png").scaled(40,40));
        pix = ":/picture/雾霾.png";
    }
    else if(labelText->text() == "阴"){
        labelPic->setPixmap(QPixmap(":/picture/阴天.png").scaled(40,40));
        pix = ":/picture/阴天.png";
    }
    else if(labelText->text() == "晴"){
        labelPic->setPixmap(QPixmap(":/picture/晴.png").scaled(40,40));
        pix = ":/picture/晴.png";
    }
    else{
        labelPic->setPixmap(QPixmap(":/picture/晴转多云（白天）.png").scaled(40,40));
        pix = ":/picture/晴转多云（白天）.png";
    }

    return pix;
}
