#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "EveryDay.h"
#include "Today.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE

class QNetworkAccessManager;

class QNetworkReply;

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    bool m_isDragging = false;
    QPointF m_mouseStartPos;
    QPointF m_windowStartPos;

    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    Today today;
    EveryDay everyDay[7];

    QByteArray m_cityData;

    void findCity();
    void parseJson(QJsonObject &jsonObj);
    void updateUi();

    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;

private slots:
    void onRequestFinished();
    void on_pushButton_seek_clicked();
    void on_lineEdit_editingFinished();
};

#endif // MAINWINDOW_H
