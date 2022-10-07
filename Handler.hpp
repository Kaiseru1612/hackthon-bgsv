#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <stdint.h>
#include "Timer.hpp"
#include "task.hpp"
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>

#define ENABLE          true
#define DISABLE         false

class Handler
{
private:
    std::thread mHandlerThread;
    std::mutex  mHandlerMutex;
    std::condition_variable mConditionalVariable;
    std::queue<task> mTaskQueue;
    Timer mHandlerTimer;
    bool mState = DISABLE;

private:
    void WaitForWork();
    void *ProcessTask();

public:
    /*
    return mTimeLogger, indicates total running time of this Handler
    */
    double GetHandlerTime();
    void Start();
    void ShutDown();
    void AddTask(task inputTask);

    Handler() = default;
    ~Handler();
};

#endif