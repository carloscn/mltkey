#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("MUTLIEBANS KEY GEN TOOLS");
    ui->lineEdit_mac->setText(gethostMac());
}

Widget::~Widget()
{
    delete ui;
}
//f(x) = x^2 + 9
//f(x) = x^2 + 8
//f(x) = x^2 + 7
//f(x) = x^2 + 6
//f(x) = x^2 + 5
//f(x) = x^2 + 4
#define pow(x) x*x
void Widget::on_pushButton_gen_clicked()
{
    QList<QString> mac_id = ui->lineEdit_mac->text().split(':');
    QString macAddr;
    QString key = "";
    char q[6];
    char r[6];
    for (quint8 i = 0; i < 6; i ++) {
        macAddr.append(mac_id.at(i));
    }
    QString date_str = ui->lineEdit_date->text();
    uint64_t data = date_str.toUInt() + 123456;
    key.append(QString::number(data));

    for (quint8 i = 0; i < 12; i ++) {
        key.append(QString::number(macAddr.at(i).toLatin1()));
    }

    qDebug() << key << "key lL" << key.length();

    ui->lineEdit_key->setText(key);

}

QString Widget::gethostMac()
{
    QList<QNetworkInterface> nets = QNetworkInterface::allInterfaces();
    int nCnt = nets.count();
    QString strMacAddr = "";
    for(int i = 0; i < nCnt; i ++)
    {
        if(nets[i].flags().testFlag(QNetworkInterface::IsUp) && nets[i].flags().testFlag(QNetworkInterface::IsRunning)
                && !nets[i].flags().testFlag(QNetworkInterface::IsLoopBack))
        {
            strMacAddr = nets[i].hardwareAddress();
            break;
        }
    }
    return strMacAddr;

}

void Widget::on_pushButton_clear_clicked()
{
    ui->lineEdit_mac->setText(gethostMac());
    ui->lineEdit_key->clear();
}
