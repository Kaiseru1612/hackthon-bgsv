//define the header gaurd
#ifndef handler_manager_hpp 
#define handler_manager_hpp

#include <iostream>
#include "Timer.hpp"
#include "Handler.hpp"
#include "task.hpp"

class HandlerManager{

    //when spawn a handler, this list will increase
    Handler mListHandler[10];

    //This list task will be taken from Reader
    task mListTask[100];

    //This is timing for tasks
    Timer mtimerLogger;

    /*
    Create new handler by adding a member to mListHandler and increase mNumberOfHandler
    tell Handler to create its own thread
    return 1 if thread created successfully
    */
    int8_t Createhandler();

    /*
    Remove handler from mListHandler, tell Handler to kill its own thread
    return 1 if self-Killed successfully
    */
    int8_t KillHandler(int HandlerID);

public:
    /*
    Constructor of class
    memcopy from Class Reader mListTask
    */
    HandlerManager();

    /*
    provide task for Handler, will route task properly :)
    */
    void AssignTask(int HandlerID);
    /*
    Sort tasks or something to make task list neatly
    */
    void OrganizeTask();
};

#endif