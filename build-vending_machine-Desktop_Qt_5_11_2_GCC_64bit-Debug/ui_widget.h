/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pb500;
    QPushButton *pb100;
    QPushButton *pb10;
    QPushButton *pb50;
    QPushButton *pbcoffee;
    QPushButton *pbtea;
    QPushButton *pbcola;
    QPushButton *reset;
    QLCDNumber *lcdNumber;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        pb500 = new QPushButton(Widget);
        pb500->setObjectName(QStringLiteral("pb500"));
        pb500->setGeometry(QRect(60, 90, 89, 25));
        pb100 = new QPushButton(Widget);
        pb100->setObjectName(QStringLiteral("pb100"));
        pb100->setGeometry(QRect(60, 130, 89, 25));
        pb10 = new QPushButton(Widget);
        pb10->setObjectName(QStringLiteral("pb10"));
        pb10->setGeometry(QRect(60, 220, 89, 25));
        pb50 = new QPushButton(Widget);
        pb50->setObjectName(QStringLiteral("pb50"));
        pb50->setGeometry(QRect(60, 180, 89, 25));
        pbcoffee = new QPushButton(Widget);
        pbcoffee->setObjectName(QStringLiteral("pbcoffee"));
        pbcoffee->setGeometry(QRect(210, 110, 89, 25));
        pbtea = new QPushButton(Widget);
        pbtea->setObjectName(QStringLiteral("pbtea"));
        pbtea->setGeometry(QRect(210, 150, 89, 25));
        pbcola = new QPushButton(Widget);
        pbcola->setObjectName(QStringLiteral("pbcola"));
        pbcola->setGeometry(QRect(210, 190, 89, 25));
        reset = new QPushButton(Widget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(290, 260, 89, 25));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(120, 10, 161, 61));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pb500->setText(QApplication::translate("Widget", "500", nullptr));
        pb100->setText(QApplication::translate("Widget", "100", nullptr));
        pb10->setText(QApplication::translate("Widget", "10", nullptr));
        pb50->setText(QApplication::translate("Widget", "50", nullptr));
        pbcoffee->setText(QApplication::translate("Widget", "coffee(100)", nullptr));
        pbtea->setText(QApplication::translate("Widget", "tea(150)", nullptr));
        pbcola->setText(QApplication::translate("Widget", "cola(200)", nullptr));
        reset->setText(QApplication::translate("Widget", "reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
