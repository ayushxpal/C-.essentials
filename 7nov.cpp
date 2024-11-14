// #include <stdio.h>
// #include <stdlib.h>
// #include <unistd.h>
// #include <sys/types.h>
// int main()
// {
//     child_pid , pid_t;
//     child_pid=fork();

//     if(child_pid<0)
//     {
//         printf("Fork Failed\n");
//         return 1;
//     }

//     if else (child_pid==0)
//     {
//         printf("Child Process: PID = %d\n", getpid());
//         printf("Child Process: PID = %d\n", getppid());
//         exit(0);
//     }

//     else
//     {
//         printf("Parent Process : PID = %d\n", getpid());
//         printf("Parent Process PID = %d\n", getpid());
//         sleep(10);
//     }

//     return 0;
// }



#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x==1) throw x;
        else if(x==0) throw 'x'
    }
}