#include "mywidget.h"

#include <QApplication>    //包含一个应用程序的头文件
#include <QLocale>
#include <QTranslator>
//程序入口  argc命令行变量的数量 argv命令行变量的数组
int main(int argc, char *argv[])
{
    //a应用程序对象，有且仅有一个
    QApplication a(argc, argv);
    //窗口对象
    myWidget w;
    //调用show方法显示
    w.show();
    //让a应用程序对象进入消息循环机制，窗口一直保持直到点击关闭
    return a.exec();
}
