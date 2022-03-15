#include "mywidget.h"
#include <QPushButton>
#include "mypushbutton.h"
#include <QtDebug>
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建一个按钮对象
    QPushButton * btn = new QPushButton;
    //设置该对象的父亲是该窗口
    btn->setParent(this);

    btn->setText("第一个按钮");

    QPushButton * btn2 = new QPushButton("第二个按钮",this);
    //移动按钮
    btn2->move(100,0);
    //重新设置窗口大小
    resize(400,400);

    //设置固定窗口大小
    setFixedSize(400,400);
    //设置窗口标题
    setWindowTitle("第一个窗口");

    //创建自己按钮对象
    MyPushButton * myBtn = new MyPushButton;
    myBtn->setText("按下关闭窗口");
    myBtn->move(200,0);
    myBtn->setParent(this);
    //信号和槽
    connect(myBtn, &MyPushButton::clicked, this, &myWidget::close);
}

myWidget::~myWidget()
{
    qDebug() << "关闭了窗口";
}

