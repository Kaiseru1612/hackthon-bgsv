#include "Timer.hpp"

int8_t Timer::StartTimer()
{
    if (mFlagIsRunning)
    {
        return E_NOT_OK;
    }
    mStartTime = high_resolution_clock::now();
    mFlagIsRunning = true;
    return E_OK;
};

int8_t Timer::StopTimer()
{
    if (!mFlagIsRunning)
    {
        return E_NOT_OK;
    }
    mDuration = high_resolution_clock::now() - mStartTime;

    mFlagIsRunning = false;
    return E_OK;
};

double Timer::GetInMicroSec()
{
    return duration_cast<microseconds>(mDuration).count();
};

double Timer::GetInMilliSec()
{
    return duration_cast<milliseconds>(mDuration).count();
};

double Timer::GetInSec()
{
    return duration_cast<seconds>(mDuration).count();
};
