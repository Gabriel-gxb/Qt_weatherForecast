#include "weathericon.h"

#include <QLabel>

WeatherIcon::WeatherIcon() {}

QString WeatherIcon::mapIcon(QLabel *labelText, QLabel *labelPic)
{
    QString pix;
    if(labelText->text().contains("雪")){
        labelPic->setPixmap(QPixmap(":/picture/bigsnow.png").scaled(40,40));
        pix = ":/picture/bigsnow.png";
    }
    else if(labelText->text().contains("雨")){
        labelPic->setPixmap(QPixmap(":/picture/bigrain.png").scaled(40,40));
        pix = ":/picture/bigrain.png";
    }
    else if(labelText->text().contains("沙尘暴") || labelText->text() == "浮沉"){
        labelPic->setPixmap(QPixmap(":/picture/sandstorm.png").scaled(40,40));
        pix = ":/picture/sandstorm.png";
    }
    else if(labelText->text() == "雾" || labelText->text() == "霾"){
        labelPic->setPixmap(QPixmap(":/picture/haze.png").scaled(40,40));
        pix = ":/picture/haze.png";
    }
    else if(labelText->text() == "阴"){
        labelPic->setPixmap(QPixmap(":/picture/overcast.png").scaled(40,40));
        pix = ":/picture/overcast.png";
    }
    else if(labelText->text() == "晴"){
        labelPic->setPixmap(QPixmap(":/picture/clear.png").scaled(40,40));
        pix = ":/picture/clear.png";
    }
    else{
        labelPic->setPixmap(QPixmap(":/picture/cloudy.png").scaled(40,40));
        pix = ":/picture/cloudy.png";
    }

    return pix;
}
