#ifndef SYSTEMCHECKER_HPP
#define SYSTEMCHECKER_HPP

#include <stdint.h>

class SystemChecker
{
    public:
        int8_t GetCores();
    private:
        int8_t NumberOfCores;
        int8_t GetCoresOfDevice(int8_t DeviceNumber);
};

#endif