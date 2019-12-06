#include "cellulopoolclient.h"

void CelluloPoolClientWrapper::init_()
{
    client = new CelluloRobotPoolClient;
    connect(client, &CelluloRobotPoolClient::newRobotFound, this, &CelluloPoolClientWrapper::onNewRobot);
    qDebug() << "POOL Object created";
}

void CelluloPoolClientWrapper::deinit_()
{
    client->deleteLater();
    client = nullptr;
}

CelluloPoolClientWrapper::CelluloPoolClientWrapper()
{
    robots_N = 0;
}

void CelluloPoolClientWrapper::onNewRobot(CelluloBluetooth* robot) {
    qDebug() << "ATTENTION ROBOT FOUND " << robot->getMacAddr();
    robots.push_back(robot);
    robots_N=robots.length();
    for (int i=0;i<robots_N;i++)
        qDebug()<<"+++++++++++++++++++++++++++++++++"<<robots[i]->getMacAddr();
}

void CelluloPoolClientWrapper::removeRobot(CelluloBluetooth *robot){
    robots.removeAll(robot);
    robots_N=robots.length();
    for (int i=0;i<robots_N;i++)
        qDebug()<<"---------------------------------"<<robots[i]->getMacAddr();
}
