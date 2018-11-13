#include "widget.h"
#include "ui_widget.h"
#include<QMessageBox>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    money_=0;
    setcontrol();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::setcontrol(){
    ui->lcdNumber->display(money_);
    ui->pbcoffee->setEnabled(money_>=100);
    ui->pbtea->setEnabled(money_>=150);
    ui->pbcola->setEnabled(money_>=200);
}
void Widget::on_pb500_clicked()
{
    money_+=500;
    setcontrol();
}

void Widget::on_pb100_clicked()
{
    money_+=100;
    setcontrol();
}

void Widget::on_pb50_clicked()
{
    money_+=50;
    setcontrol();
}

void Widget::on_pb10_clicked()
{
    money_+=10;
    setcontrol();
}

void Widget::on_pbcoffee_clicked()
{
    money_-=100;
    setcontrol();
}

void Widget::on_pbtea_clicked()
{
    money_-=150;
    setcontrol();
}

void Widget::on_pbcola_clicked()
{
    money_-=200;
    setcontrol();
}

void Widget::on_reset_clicked()
{
    int type[4]={500,100,50,10};
    int many[4]={0,0,0,0};
    for(int i=0;i<4;i++){
        many[i]=money_/type[i];
        money_-=many[i]*type[i];
    }
    setcontrol();
    QString str;
    for(int i=0;i<4;i++){
        str.sprintf("%d : %d\n",type[i],many[i]);
    }
    QMessageBox::information(this,"Charge",str,"OK");
}
