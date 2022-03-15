#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>  //包含的窗口类头文件

class myWidget : public QWidget//写了一个自己的类继承了窗口类
{
    Q_OBJECT  //允许类中使用信号和槽的机制的宏

public:
    myWidget(QWidget *parent = nullptr); //构造函数
    ~myWidget();  //析构函数
};
#endif // MYWIDGET_H
