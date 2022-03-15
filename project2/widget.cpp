#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
//Teacher/Student 下课，老师触发信号，饿了，学生响应，请客吃饭

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建老师学生
    this->tc = new Teacher(this);
    this->st = new Student(this);


    //connect(tc, &Teacher::hungry, st, &Student::treat);
    void(Teacher:: *teacherSignal)(QString) = &Teacher::hungry;
    void(Student:: *studentSignal)(QString) = &Student::treat;
    connect(tc, teacherSignal, st, studentSignal);//带参数

    //classisover();

    //点击按钮下课
    QPushButton *btn = new QPushButton("下课", this);
    this->resize(400,400);
    connect(btn, &QPushButton::clicked, this, &Widget::classisover);
    //信号可以连接信号，一个信号可以连接多个槽函数，多个信号可以连接同一个槽函数，信号和槽函数的参数必须一一对应
    //信号和槽的参数个数可以不用一致，信号的参数个数可以多于槽的参数个数
    //lamda
    [=](){
        btn->setText("aaaa");
    }();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::classisover()
{
    //下课触发饿了
    //emit tc->hungry();
    emit tc->hungry("宫保鸡丁");
}

