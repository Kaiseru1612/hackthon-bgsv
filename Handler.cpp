#include "Handler.hpp"
#include <unistd.h>

void Handler::WaitForWork()
{
    if (mTaskQueue.empty())
    {
        std::unique_lock<std::mutex> lock(mHandlerMutex);
        /* Stop wait when mTaskQueue not empty or mState is disabled */
        mConditionalVariable.wait(lock, [this]{
            return (!mTaskQueue.empty() | !mState); //<- return True to stop wait
            }
        ); 
    }
}

void *Handler::ProcessTask()
{
    mHandlerTimer.StartTimer();

    while (mState)
    {
        WaitForWork();

        Timer taskTimer;
        taskTimer.StartTimer();
        task tempTask = mTaskQueue.front();
        mTaskQueue.pop();
        sleep(tempTask.cost);
        taskTimer.StopTimer();

    }

    mHandlerTimer.StopTimer();
    return nullptr;
}

double Handler::GetHandlerTime()
{
    return mHandlerTimer.GetInMicroSec();
}

void Handler::AddTask(task inputTask)
{
    mTaskQueue.push(inputTask);
    mConditionalVariable.notify_all();
}

void Handler::Start()
{
    mState = ENABLE;
    mHandlerThread = std::thread(&Handler::ProcessTask, this);
}

void Handler::ShutDown()
{
    mState = DISABLE;
    mConditionalVariable.notify_all();
}

Handler::~Handler()
{
    if (mHandlerThread.joinable())
        mHandlerThread.join();
}
