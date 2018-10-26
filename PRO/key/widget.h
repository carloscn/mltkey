#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QtNetwork/QNetworkInterface>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_gen_clicked();

    void on_pushButton_clear_clicked();

private:


    QString gethostMac();

    Ui::Widget *ui;
};

#endif // WIDGET_H
