#ifndef CELLULOPOOLCLIENT_H
#define CELLULOPOOLCLIENT_H

#include <QtCore>
#include <QObject>
#include "../../cellulo-core/qml-cellulo/src/comm/relay/CelluloRobotPoolClient.h"
#include <QDebug>
#include <QVector>

using Cellulo::CelluloRobotPoolClient;
using Cellulo::CelluloBluetooth;


class CelluloPoolClientWrapper : public QObject
{ Q_OBJECT

    Q_INVOKABLE void init_();
    Q_INVOKABLE void deinit_();

    CelluloRobotPoolClient *client;

    QVector<CelluloBluetooth*> robots;
public:
    CelluloPoolClientWrapper();
    QVector<Cellulo::CelluloBluetooth*> getRobots() {
        return robots;
    }

    int robots_N;

public slots:
    void init()
    {
        QMetaObject::invokeMethod(this, "init_", Qt::BlockingQueuedConnection);
    }

    void deinit()
    {
        QMetaObject::invokeMethod(this, "deinit_", Qt::BlockingQueuedConnection);
    }

    void onNewRobot(CelluloBluetooth* robot);
};

#endif // CELLULOPOOLCLIENT_H
