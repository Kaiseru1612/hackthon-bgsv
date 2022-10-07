#pragma once
#include <chrono>
#include <queue>

#define E_NOT_OK -1
#define E_OK 0

using namespace std::chrono;

class Timer{
private:
    time_point<high_resolution_clock> mStartTime;
    duration<double> mDuration;
    bool mFlagIsRunning = false;

public:    
    /**
     * Start timer
     * @param none
     * @return 0 if start timer success, -1 if there is timer already running.
     */
    int8_t StartTimer();

    /**
     * Stop timer
     * @param none
     * @return 0 if stop timer success, -1 if timer is not yet started.
     */
    int8_t StopTimer();

    /**
     * Get duration in microsecond
     * @param none
     * @return The duration in microsecond
     */
    double GetInMicroSec();

    /**
     * Get duration in millisecond
     * @param none
     * @return The duration in millisecond
     */
    double GetInMilliSec();

    /**
     * Get duration in second
     * @param none
     * @return The duration in second
     */
    double GetInSec();
};
