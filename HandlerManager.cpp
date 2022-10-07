#include "HandlerManager.hpp"
#include
HandlerManager::HandlerManager(int8_t List[100])
{
    
    int i;
    for (i = 0; i < 100; i++)
    {
        mListTask[i] = List[i];
    }
};