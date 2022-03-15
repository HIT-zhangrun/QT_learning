#include "student.h"
#include <QDebug>

Student::Student(QObject *parent)
    : QObject{parent}
{

}

void Student::treat()
{
    qDebug() << "请老师吃饭";
}

void Student::treat(QString foodname)
{
    qDebug() << "请老师吃饭,吃" <<foodname.toUtf8().data();
}
