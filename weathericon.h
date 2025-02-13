#ifndef WEATHERICON_H
#define WEATHERICON_H


#include <qmap.h>

class QPixmap;
class QLabel;
class WeatherIcon
{
public:
    WeatherIcon();

    QString mapIcon(QLabel *labelText, QLabel *labelPic);

};

#endif // WEATHERICON_H
