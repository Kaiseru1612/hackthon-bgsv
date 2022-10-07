#ifndef READER_HPP
#define READER_HPP

#include <stdint.h>
#include <iostream>
#include <iostream>
#include <fstream>
#include "task.hpp"

#define file_name "test.txt"

using namespace std;

class Reader
{
public:
    void ReadFile();
    int8_t *GetListTask();

private:
    task mListTask[100];
};

#endif