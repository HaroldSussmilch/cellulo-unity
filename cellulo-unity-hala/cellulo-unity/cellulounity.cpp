#include "cellulounity.h"
#include "cellulothread.h"
#include "cellulorobotwrapper.h"
#include "cellulopoolclient.h"
#include <QDebug>

// thread with an event loop
CelluloThread* thread = nullptr;

// pool client wrapper
CelluloPoolClientWrapper* client = nullptr;

// number of used by Unity robots
int used_robots;

// TODO: use a less ugly way of creating thread (call at library loading)
void initialize()
{
    if(thread == nullptr) {
        qDebug() << "creating thread...";
        thread = new CelluloThread;
        qDebug() << "starting thread...";
        thread->start();
    }

    // initializing the library again...
    if(client != nullptr) {
        qDebug() << "Client deinit...";
        client->deinit();
        qDebug() << "Deleting client...";
        client->deleteLater();
        qDebug() << "Setting ptr to nullptr";
        client = nullptr;
    }

    if(client == nullptr) {
        qDebug() << "creating pool...";
        client = new CelluloPoolClientWrapper;

        qDebug() << "moving pool to thread...";
        client->moveToThread(thread);

        qDebug() << "initializing pool...";
        client->init();

        qDebug() << "Pool OK";

        // number of used by Unity robots
        used_robots = 0;
    }
}

int64_t newRobot()
{
    if(client == nullptr) {
        qDebug() << "Cannot create a new robot because initialize() was not called";
        return 0; // an error message will be shown in C# code
    }

    if(used_robots >= client->robots_N) {
        qDebug() << "Cannot create a new robot because the pool is exhausted. Connect to more and restart the app.";
        return 0; // an error message will be shown in C# code
    }
    qDebug()<<"newrobot: used robots= "<< used_robots;
    // obtaining a fee robot from pool
    Cellulo::CelluloBluetooth* robot1 = client->getRobots().at(used_robots++);

    // wrapping it
    qDebug() << "Wrapping robot" << robot1;
    CelluloRobotWrapper* robot = new CelluloRobotWrapper(robot1);

    qDebug() << "moving robot to thread...";
    robot->moveToThread(thread);

    qDebug() << "initializing robot...";
    robot->init();

    qDebug() << "Got wrapped robot" << robot;
    // TODO: use something less ugly than that
    return (int64_t) robot;
}

// TODO: check if *robot is actually a robot object

void setGoalVelocity(int64_t robot, float vx, float vy, float w)
{
    ((CelluloRobotWrapper*) robot)->setGoalVelocity(vx, vy, w);
}

void setGoalPose(int64_t robot, float x, float y, float theta, float v, float w)
{
    ((CelluloRobotWrapper*) robot)->setGoalPose(x, y, theta, v, w);
}

void setGoalPosition(int64_t robot, float x, float y, float v)
{
    ((CelluloRobotWrapper*) robot)->setGoalPosition(x, y, v);
}

void clearTracking(int64_t robot)
{
    ((CelluloRobotWrapper*) robot)->clearTracking();
}

void clearHapticFeedback(int64_t robot)
{
    ((CelluloRobotWrapper*) robot)->clearHapticFeedback();
}

void setVisualEffect(int64_t robot, int64_t effect, int64_t r, int64_t g, int64_t b, int64_t value)
{
    ((CelluloRobotWrapper*) robot)->setVisualEffect(effect, QColor(r, g, b), value);
}

void setCasualBackdriveAssistEnabled(int64_t robot, int64_t enabled)
{
    ((CelluloRobotWrapper*) robot)->setCasualBackdriveAssistEnabled(enabled);
}

void setHapticBackdriveAssist(int64_t robot, float xAssist, float yAssist, float thetaAssist)
{
    ((CelluloRobotWrapper*) robot)->setHapticBackdriveAssist(xAssist, yAssist, thetaAssist);
}

void reset(int64_t robot)
{
    ((CelluloRobotWrapper*) robot)->reset();
}

void simpleVibrate(int64_t robot, float iX, float iY, float iTheta, int64_t period, int64_t duration)
{
    ((CelluloRobotWrapper*) robot)->simpleVibrate(iX, iY, iTheta, period, duration);
}

float getX(int64_t robot)
{
    return ((CelluloRobotWrapper*) robot)->robot->getX();
}

float getY(int64_t robot)
{
    return ((CelluloRobotWrapper*) robot)->robot->getY();
}

float getTheta(int64_t robot)
{
    return ((CelluloRobotWrapper*) robot)->robot->getTheta();
}

int64_t getKidnapped(int64_t robot)
{
    Cellulo::CelluloBluetooth* robot1 = (Cellulo::CelluloBluetooth*) ((CelluloRobotWrapper*) robot)->robot;
    return robot1->getKidnapped();
}

void destroyRobot(int64_t robot)
{
    qDebug() << "Removing callback...";
    ((CelluloRobotWrapper*) robot)->kidnappedCallback = nullptr;

    qDebug() << "Calling deinit...";

    used_robots--;
    client->removeRobot((Cellulo::CelluloBluetooth*) ((CelluloRobotWrapper*) robot)->robot);

    ((CelluloRobotWrapper*) robot)->deinit();
    qDebug()<<"destroy: used robots= "<< used_robots;
}

void setKidnappedCallback(int64_t robot, callback_t callback)
{
    ((CelluloRobotWrapper*) robot)->kidnappedCallback = callback;
}

int64_t robotsRemaining()
{
    if(client == nullptr) {
        qDebug() << "Cannot get robotsRemaining() because initialize() was not called";
        return 0;
    }

    if(client == nullptr)
        return 0;
    qDebug() << "in robots remaing"<<client->robots_N<<used_robots;

    return client->robots_N - used_robots;
}


int64_t totalRobots()
{
    if(client == nullptr) {
        qDebug() << "Cannot get totalRobots() because initialize() was not called";
        return 0;
    }

    if(client == nullptr)
        return 0;
    return client->robots_N;
}


