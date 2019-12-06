#include "cellulothread.h"
#include <QDebug>
#include "../../cellulo-core/qml-cellulo/src/comm/relay/CelluloRobotPoolClient.h"

CelluloThread::CelluloThread()
{

}

void CelluloThread::run()
{
    qDebug() << "CelluloThread::run...";
    argc = 1;
    argv[0] = strdup("CelluloThread");
    argv[1] = nullptr;

    qDebug() << "CelluloThread creating QCoreApp";
    QCoreApplication app(argc, argv);
    application = &app;
    qDebug() << "Starting the event loop...";
    app.exec();
}
