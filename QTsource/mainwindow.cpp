#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->actionnew->setIcon(QIcon("C:/Users/zhangrun/OneDrive/图片/Saved Pictures/2.jpg"));

    //添加QT的资源
    //使用
    ui->actionnew->setIcon(QIcon(":/image/719logo.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

