#include "Timer.hpp"
#include "Handler.hpp"
#include "HandlerManager.hpp"
#include "Reader.hpp"
#include "SystemChecker.hpp"
#include "Writer.hpp"
#include <unistd.h>

int main()
{
    Timer ProgramTimer;
    ProgramTimer.StartTimer();

    /* ------------------ Code here ------------------ */
    std::cout << "hello"<<std::endl;



    /* ----------------------------------------------- */
    ProgramTimer.StopTimer();
    std::cout<<"Program execute time Micro sec: "<<ProgramTimer.GetInMicroSec()<<std::endl;
    std::cout<<"Program execute time Milli sec: "<<ProgramTimer.GetInMilliSec()<<std::endl;
    std::cout<<"Program execute time Sec: "      <<ProgramTimer.GetInSec()<<std::endl;
    return 0;
}