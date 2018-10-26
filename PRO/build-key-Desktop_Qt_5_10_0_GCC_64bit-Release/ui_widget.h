/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_mac;
    QLabel *label_3;
    QLineEdit *lineEdit_date;
    QLabel *label_2;
    QLineEdit *lineEdit_key;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_gen;
    QPushButton *pushButton_clear;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(471, 128);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_mac = new QLineEdit(Widget);
        lineEdit_mac->setObjectName(QStringLiteral("lineEdit_mac"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_mac);

        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEdit_date = new QLineEdit(Widget);
        lineEdit_date->setObjectName(QStringLiteral("lineEdit_date"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_date);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_key = new QLineEdit(Widget);
        lineEdit_key->setObjectName(QStringLiteral("lineEdit_key"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_key);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_gen = new QPushButton(Widget);
        pushButton_gen->setObjectName(QStringLiteral("pushButton_gen"));

        horizontalLayout->addWidget(pushButton_gen);

        pushButton_clear = new QPushButton(Widget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));

        horizontalLayout->addWidget(pushButton_clear);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label->setText(QApplication::translate("Widget", "MEC_ID:", nullptr));
        label_3->setText(QApplication::translate("Widget", "UP TO:", nullptr));
        label_2->setText(QApplication::translate("Widget", "KEY:", nullptr));
        pushButton_gen->setText(QApplication::translate("Widget", "Generate", nullptr));
        pushButton_clear->setText(QApplication::translate("Widget", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
