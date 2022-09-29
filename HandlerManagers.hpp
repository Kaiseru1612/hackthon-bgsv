//  tmplat
//  Fisheries Integrated Modeling System (FIMS)

//define the header gaurd
#ifndef handler_manager_hpp 
#define handler_manager_hpp

#include <iostream>

template <class T>
class HandlerManager{
    Handlers mListHandler[10];
    int8_t mListTask[100];
    Timer mtimerLogger;

    void Createhandler();
    void KillHandler(int HandlerID);
public:
    void AssignTask(int HandlerID);
    void GetLogTime ();
    void OrganizeTask();
};

#endif