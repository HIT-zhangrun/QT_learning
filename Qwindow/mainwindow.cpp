#include "mainwindow.h"
#include <QMenuBar>
#include <QToolBar>
#include <QDebug>
#include <QPushButton>
#include <QStatusBar>
#include <QLabel>
#include <QDockWidget>
#include <QTextEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //重置窗口
    resize(600,400);

    //菜单栏创建 菜单栏只能有1个
    QMenuBar *bar = menuBar();
    //放入窗口中
    setMenuBar(bar);
    //创建菜单
    QMenu *fileMenu = bar->addMenu("文件");
    QMenu *editMenu = bar->addMenu("编辑");
    //创建菜单项目
    QAction *newAction = fileMenu->addAction("新建");
    //添加分隔线
    fileMenu->addSeparator();
    QAction *openAction = fileMenu->addAction("打开");

    //工具栏 可以由多个
    QToolBar *toolBar = new QToolBar(this);
    addToolBar(Qt::TopToolBarArea, toolBar);
    //后期设置只允许上左停靠
    toolBar->setAllowedAreas(Qt::TopToolBarArea | Qt::LeftToolBarArea);
    //设置不让浮动
    toolBar->setFloatable(false);
    //设置移动（总开关）就不能拖动了
    toolBar->setMovable(false);
    //设置工具栏中内容
    toolBar->addAction(newAction);
    //添加分隔线
    toolBar->addSeparator();
    toolBar->addAction(openAction);
    //工具栏添加控件：按钮
    QPushButton *btn = new QPushButton("aa", this);
    toolBar->addWidget(btn);

    //状态栏 最多1个
    QStatusBar * stBar = statusBar();
    setStatusBar(stBar);
    //放标签控件
    QLabel *label = new QLabel("提示信息", this);
    stBar->addWidget(label);
    QLabel *label2 = new QLabel("右侧提示信息", this);
    stBar->addPermanentWidget(label2);

    //铆接部件
    QDockWidget *dockWidget = new QDockWidget("浮动", this);
    addDockWidget(Qt::BottomDockWidgetArea, dockWidget);

    //设置核心部件 只能一个
    QTextEdit *edit = new QTextEdit(this);
    setCentralWidget(edit);



}

MainWindow::~MainWindow()
{
}

