#ifndef CELLULOUNITY_H
#define CELLULOUNITY_H

#include <stdint.h>

typedef void (*callback_t)();

extern "C" {
    // cellulo
    void initialize();
    int64_t newRobot();

    void destroyRobot(int64_t robot);

    void setGoalVelocity(int64_t robot, float vx, float vy, float w);
    void setGoalPose(int64_t robot, float x, float y, float theta, float v, float w);
    void setGoalPosition(int64_t robot, float x, float y, float v);
    void clearTracking(int64_t robot);
    void clearHapticFeedback(int64_t robot);
    void setVisualEffect(int64_t robot, int64_t effect, int64_t r, int64_t g, int64_t b, int64_t value);
    void setCasualBackdriveAssistEnabled(int64_t robot, int64_t enabled);
    void setHapticBackdriveAssist(int64_t robot, float xAssist, float yAssist, float thetaAssist);
    void reset(int64_t robot);
    void simpleVibrate(int64_t robot, float iX, float iY, float iTheta, int64_t period, int64_t duration);

    float getX(int64_t robot);
    float getY(int64_t robot);
    float getTheta(int64_t robot);
    int64_t getKidnapped(int64_t robot);

    void setKidnappedCallback(int64_t robot, callback_t callback);
    int64_t robotsRemaining();
    int64_t totalRobots();
}

#endif // CELLULOUNITY_H
