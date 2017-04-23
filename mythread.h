#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <QString>

class MyThread : public QThread
{
public:
    explicit MyThread(QString s);

    void run();
private:
    QString name;
};

#endif
