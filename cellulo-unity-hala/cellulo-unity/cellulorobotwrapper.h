#ifndef CELLULOROBOTWRAPPER_H
#define CELLULOROBOTWRAPPER_H

#include <QTimer>
#include <QObject>
#include "../../cellulo-core/qml-cellulo/src/comm/CelluloBluetooth.h"
#include "cellulounity.h"

class CelluloRobotWrapper: public QObject
{ Q_OBJECT

    Q_INVOKABLE void deinit_();
    Q_INVOKABLE void init_();
    Q_INVOKABLE void setLocalAdapterMacAddr_(QString localAdapterMacAddr) {
        robot->setLocalAdapterMacAddr(localAdapterMacAddr);
    }
    Q_INVOKABLE void setAutoConnect_(bool autoConnect) {
        robot->setAutoConnect(autoConnect);
    }
    Q_INVOKABLE void setMacAddr_(QString macAddr) {
        robot->setMacAddr(macAddr);
    }
    Q_INVOKABLE void connectToServer_() {
        robot->connectToServer();
    }
    Q_INVOKABLE void setGoalVelocity_(float vx, float vy, float w) {
        robot->setGoalVelocity(vx, vy, w);
    }
    Q_INVOKABLE void setGoalPose_(float x, float y, float theta, float v, float w) {
        robot->setGoalPose(x, y, theta, v, w);
    }
    Q_INVOKABLE void setGoalPosition_(float x, float y, float v) {
        robot->setGoalPosition(x, y, v);
    }
    Q_INVOKABLE void clearTracking_() {
        robot->clearTracking();
    }
    Q_INVOKABLE void clearHapticFeedback_() {
        robot->clearHapticFeedback();
    }
    Q_INVOKABLE void setVisualEffect_(int effect, QColor color, int value) {
        robot->setVisualEffect((Cellulo::CelluloBluetoothEnums::VisualEffect) effect, color, value);
    }
    Q_INVOKABLE void setCasualBackdriveAssistEnabled_(bool enabled) {
        robot->setCasualBackdriveAssistEnabled(enabled);
    }
    Q_INVOKABLE void setHapticBackdriveAssist_(float xAssist, float yAssist, float thetaAssist) {
        robot->setHapticBackdriveAssist(xAssist, yAssist, thetaAssist);
    }
    Q_INVOKABLE void reset_() {
        robot->reset();
    }
    Q_INVOKABLE void simpleVibrate_(float iX, float iY, float iTheta, unsigned int period, unsigned int duration) {
        robot->simpleVibrate(iX, iY, iTheta, period, duration);
    }

public:
    CelluloRobotWrapper();
    CelluloRobotWrapper(Cellulo::CelluloBluetooth* robot);

    Cellulo::CelluloBluetooth* robot;

    callback_t kidnappedCallback = nullptr;

    void init()
    {
        QMetaObject::invokeMethod(this, "init_", Qt::BlockingQueuedConnection);
    }
    void deinit()
    {
        QMetaObject::invokeMethod(this, "deinit_", Qt::BlockingQueuedConnection);
    }
    void setLocalAdapterMacAddr(QString localAdapterMacAddr)
    {
        QMetaObject::invokeMethod(this, "setLocalAdapterMacAddr_", Qt::BlockingQueuedConnection, Q_ARG(QString, localAdapterMacAddr));
    }
    void setAutoConnect(bool autoConnect)
    {
        QMetaObject::invokeMethod(this, "autoConnect_", Qt::BlockingQueuedConnection, Q_ARG(bool, autoConnect));
    }
    void setMacAddr(QString macAddr)
    {
        QMetaObject::invokeMethod(this, "setMacAddr_", Qt::BlockingQueuedConnection, Q_ARG(QString, macAddr));
    }
    void connectToServer()
    {
        QMetaObject::invokeMethod(this, "connectToServer_", Qt::BlockingQueuedConnection);
    }
    void setGoalVelocity(float vx, float vy, float w)
    {
        QMetaObject::invokeMethod(this, "setGoalVelocity_", Qt::BlockingQueuedConnection, Q_ARG(float, vx), Q_ARG(float, vy), Q_ARG(float, w));
    }
    void setGoalPose(float x, float y, float theta, float v, float w)
    {
        QMetaObject::invokeMethod(this, "setGoalPose_", Qt::BlockingQueuedConnection, Q_ARG(float, x), Q_ARG(float, y), Q_ARG(float, theta), Q_ARG(float, v), Q_ARG(float, w));
    }
    void setGoalPosition(float x, float y, float v)
    {
        QMetaObject::invokeMethod(this, "setGoalPosition_", Qt::BlockingQueuedConnection, Q_ARG(float, x), Q_ARG(float, y), Q_ARG(float, v));
    }
    void clearTracking()
    {
        QMetaObject::invokeMethod(this, "clearTracking_", Qt::BlockingQueuedConnection);
    }
    void clearHapticFeedback()
    {
        QMetaObject::invokeMethod(this, "clearHapticFeedback_", Qt::BlockingQueuedConnection);
    }
    void setVisualEffect(int effect, QColor color, int value)
    {
        QMetaObject::invokeMethod(this, "setVisualEffect_", Qt::BlockingQueuedConnection, Q_ARG(int, effect), Q_ARG(QColor, color), Q_ARG(int, value));
    }
    void setCasualBackdriveAssistEnabled(bool enabled)
    {
        QMetaObject::invokeMethod(this, "setCasualBackdriveAssistEnabled_", Qt::BlockingQueuedConnection, Q_ARG(bool, enabled));
    }
    void setHapticBackdriveAssist(float xAssist, float yAssist, float thetaAssist)
    {
        QMetaObject::invokeMethod(this, "setHapticBackdriveAssist_", Qt::BlockingQueuedConnection, Q_ARG(float, xAssist), Q_ARG(float, yAssist), Q_ARG(float, thetaAssist));
    }
    void reset()
    {
        QMetaObject::invokeMethod(this, "reset_", Qt::BlockingQueuedConnection);
    }
    void simpleVibrate(float iX, float iY, float iTheta, unsigned int period, unsigned int duration)
    {
        QMetaObject::invokeMethod(this, "simpleVibrate_", Qt::BlockingQueuedConnection, Q_ARG(float, iX), Q_ARG(float, iY), Q_ARG(float, iTheta), Q_ARG(unsigned int, period),
                                  Q_ARG(unsigned int, duration));
    }

public slots:
    void kidnappedChanged();
};

#endif // CELLULOROBOTWRAPPER_H
