#ifndef WRITE_HPP
#define WRITE_HPP

#include <stdint.h>
#include "task.hpp"

/*

*/
class Writer
{
public:
    task mListTask[100];
    void CreateFile();
    
    void WriteTaskTime(int8_t ID, int8_t TaskNo, double ExecuteTime);
    void WriteHandlerTime(int8_t ID, double ExecuteTime);
    void WriteProgramTime(double ExecuteTime);

};

#endif