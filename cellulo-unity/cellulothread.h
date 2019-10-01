#ifndef CELLULOTHREAD_H
#define CELLULOTHREAD_H

#include <QThread>
#include <QCoreApplication>
#include <QPointer>

class CelluloThread : public QThread
{ Q_OBJECT
private:
    QPointer<QCoreApplication> application;
    int argc;
    char* argv[2];
public:
    CelluloThread();

    void run() override;
};

#endif // CELLULOTHREAD_H
