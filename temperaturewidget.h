#ifndef TEMPERATUREWIDGET_H
#define TEMPERATUREWIDGET_H

#include <QObject>
#include <QWidget>

class TemperatureWidget : public QWidget
{
    Q_OBJECT
public:
    explicit TemperatureWidget(QWidget *parent = nullptr);

    void setTemperatureData(const QVector<QPointF> &highData,
                            const QVector<QPointF> &lowData);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    double m_min;
    double m_max;
    QVector<QPointF> m_highData;
    QVector<QPointF> m_lowData;

signals:
};

#endif // TEMPERATUREWIDGET_H
