#include <iostream>   
using namespace std;
int main()
{
    int number;
    int d=2;
    cout<<"enter a number ";
    cin>>number;
    bool isPrime=true;
    while(number!=d)
    {

        if(number%d==0)
        {
            isPrime=false;
            break;
        }

        d++;


    }

    if(isPrime)
    {
        cout<<"prime hai bete";
    }

    else{
        cout<<"not prime";
    }
}