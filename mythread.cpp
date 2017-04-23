#include <QCoreApplication>
#include "mythread.h"
#include <QDebug>

MyThread::MyThread(QString s) : name(s)
{
}


void MyThread::run()
{
    for(int i = 0; i <= 4; i++)
    {
        qDebug() << this->name;
    }
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyThread thread1("A"), thread2("B"), thread3("C");

    thread1.start();
    thread2.start();
    thread3.start();

    return a.exec();
}
