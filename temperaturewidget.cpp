#include "temperaturewidget.h"
#include <QPainter>
#include <QPainterPath>
#include <QtMath>

TemperatureWidget::TemperatureWidget(QWidget *parent)
    : QWidget{parent}
{
    setAttribute(Qt::WA_StyledBackground, true);
    setStyleSheet("background-color:rgba(100, 100, 100, 50)");
}

void TemperatureWidget::setTemperatureData(
    const QVector<QPointF> &highData,
    const QVector<QPointF> &lowData)
{
    double minTemp = 100;
    double maxTemp = -100;

    for (const auto &p : highData) {
        minTemp = qMin(minTemp, p.y());
        maxTemp = qMax(maxTemp, p.y());
    }
    for (const auto &p : lowData) {
        minTemp = qMin(minTemp, p.y());
        maxTemp = qMax(maxTemp, p.y());
    }

    // 动态计算缩放参数（保留20%边距）
    const double verticalMargin = 0.2 * (maxTemp - minTemp);
    m_min = minTemp - verticalMargin;
    m_max = maxTemp + verticalMargin;

    m_highData = highData;
    m_lowData = lowData;

    update();
}

void TemperatureWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);  //抗锯齿

    // 统一绘图区域（保留边距）
    const QRectF plotArea = rect().adjusted(30, 70, -30, -50);
    const double plotHeight = plotArea.height();

    // 温度到坐标的转换函数
    auto tempToY = [&](double temp) {
        return plotArea.bottom() - (temp-m_min)/(m_max-m_min) * plotHeight;
    };

    // 绘制高温线（上半区）
    if (!m_highData.isEmpty()) {
        QPen pen(QColor(239, 159, 0), 2);
        painter.setPen(pen);

        QPainterPath path;
        path.moveTo(plotArea.left() + m_highData[0].x(),
                    tempToY(m_highData[0].y()) - plotHeight/4); // 上移1/4高度
        for (int i = 1; i < m_highData.size(); i++) {
            path.lineTo(plotArea.left() + m_highData[i].x(),
                        tempToY(m_highData[i].y()) - plotHeight/4);
        }
        painter.drawPath(path);

        // 绘制高温标签
        painter.setPen(Qt::white);
        for (const auto &p : m_highData) {
            const QPointF pos(plotArea.left() + p.x() - 5,
                              tempToY(p.y()) - plotHeight/4 - 15);
            painter.drawText(pos, QString::number(p.y(), 'f', 0) + "℃");
        }
    }

    // 绘制低温线（下半区）
    if (!m_lowData.isEmpty()) {
        QPen pen(QColor(0, 170, 255), 2);
        painter.setPen(pen);

        QPainterPath path;
        path.moveTo(plotArea.left() + m_lowData[0].x(),
                    tempToY(m_lowData[0].y()) + plotHeight/4); // 下移1/4高度
        for (int i = 1; i < m_lowData.size(); i++) {
            path.lineTo(plotArea.left() + m_lowData[i].x(),
                        tempToY(m_lowData[i].y()) + plotHeight/4);
        }
        painter.drawPath(path);

        // 绘制低温标签
        painter.setPen(Qt::white);
        for (const auto &p : m_lowData) {
            const QPointF pos(plotArea.left() + p.x() - 5,
                              tempToY(p.y()) + plotHeight/4 - 15);
            painter.drawText(pos, QString::number(p.y(), 'f', 0) + "℃");
        }
    }
}
