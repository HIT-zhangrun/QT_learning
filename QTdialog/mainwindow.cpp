#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QMessageBox>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //点击新建，弹出对话框
//    connect(ui->actionnew, &QAction::triggered, [=](){
//        //对话框 模态与非模态（可以对其他窗口进行操作）
//        //模态
//        QDialog dlg(this);
//        dlg.resize(400,200);
//        dlg.exec();//模态
//        qDebug() << "模态对话框弹出";
//    });

//      connect(ui->actionnew, &QAction::triggered, [=](){
//          //对话框 模态与非模态（可以对其他窗口进行操作）
//          //非模态
//          QDialog *dlg = new QDialog(this);
//          dlg->resize(400,200);
//          dlg->show();//非模态
//          dlg->setAttribute(Qt::WA_DeleteOnClose, true);//避免出现内存泄漏
//          qDebug() << "非模态对话框弹出";

//      });

    //创建消息对话框
    //错误
//    QMessageBox::critical(this, "critical", "错误");
    //信息
//    QMessageBox::information(this, "info", "信息");
    //提问
    connect(ui->actionnew, &QAction::triggered, [=](){
    //QMessageBox::question(this, "ques", "提问");
    //警告
    //QMessageBox::warning(this, "ques", "提问");
    //颜色对话框
//    QColor color = QColorDialog::getColor(QColor(255,0,0));
//    qDebug() <<"r="<<color.red() <<"g="<<color.green()<<"b="<<color.blue();
        //文件对话框
        //QString str = QFileDialog::getOpenFileName(this, "打开文件", "C:\\users", "(*.txt)|(*.*)");
        //字体
        bool flag;
        QFont font = QFontDialog::getFont(&flag, QFont("黑体",36));
        qDebug() << "字体"<< font.family()<<"字号"<<font.pointSize()<<"加粗"<<font.bold();
    });


}

MainWindow::~MainWindow()
{
    delete ui;
}

