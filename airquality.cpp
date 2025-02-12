#include "airquality.h"

#include <QLabel>

AirQuality::AirQuality() {}

void AirQuality::mapQuality(QLabel *label)
{
    int aqi = label->text().toInt();
    if(aqi<=50){
        label->setText("优");
        label->setStyleSheet("background-color:rgb(0, 210, 0)");
    }
    else if(aqi<=100){
        label->setText("良");
        label->setStyleSheet("background-color:rgb(220, 220, 0)");
    }
    else if(aqi<=150){
        label->setText("轻度");
        label->setStyleSheet("background-color:rgb(210, 130, 0)");
    }
    else if(aqi<=200){
        label->setText("中度");
        label->setStyleSheet("background-color:rgb(240, 0, 0)");
    }
    else if(aqi<=300){
        label->setText("重度");
        label->setStyleSheet("background-color:rgb(145, 0, 109)");
    }
    else{
        label->setText("严重");
        label->setStyleSheet("background-color:rgb(90, 0, 68)");
    }
}

