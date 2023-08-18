#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
#include <cstdlib>

using namespace std;

int fact(int n)
{
    if(n < 0) // Introduce an error for negative input
    {
        return -1; // Return a negative value as an error indicator
    }
    if(n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int main(int argc, char *argv[])
{
    cout << "START" << endl;
    double execution_time = atof(argv[1]) * 60;
    int loopdelay = atoi(argv[2]);
    time_t starttime, endtime;
    time(&starttime);
    time(&endtime);

    while(difftime(endtime, starttime) < execution_time)
    {
        int iret = fact(-5);
        if (iret == -1)
        {
            std::cout << "Error: Negative input to factorial function" << std::endl;
            exit(1);
        }
        else
        {
            cout <<"Factorial of given number ::"<< iret << "\n";
        }
        this_thread::sleep_for(chrono::seconds(loopdelay));
        time(&endtime);
    }
     cout << "END" << endl;

    return 0;
}