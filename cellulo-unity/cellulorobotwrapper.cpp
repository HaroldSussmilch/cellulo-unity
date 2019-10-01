#include "cellulorobotwrapper.h"

void CelluloRobotWrapper::deinit_() {
    robot->deleteLater();
}

void CelluloRobotWrapper::init_() {
    if(robot == nullptr)
        robot = new Cellulo::CelluloBluetooth();
    connect(robot, &Cellulo::CelluloBluetooth::kidnappedChanged, this, &CelluloRobotWrapper::kidnappedChanged);
    qDebug() << "Object created";
}

CelluloRobotWrapper::CelluloRobotWrapper()
{
    this->robot = nullptr;
}

CelluloRobotWrapper::CelluloRobotWrapper(Cellulo::CelluloBluetooth *robot)
{
    this->robot = robot;
}

void CelluloRobotWrapper::kidnappedChanged()
{
    qDebug() << "Kidnapped is now " << robot->getKidnapped();
    if(kidnappedCallback) {
        kidnappedCallback();
    }
}
