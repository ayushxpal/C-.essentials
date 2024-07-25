#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter any number: ";
    cin>>number;
    int d=2;
    bool isPrime=true;
    while (d<number)
    {
        if (number%d==0)
        {
            isPrime=false;
            break;
        }

        d++;
    }

    if (isPrime)
    {
        cout<<number<<" is a prime number";
    }
    else
    {
        cout<<number<<" is not a prime number";
    }
}