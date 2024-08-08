#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"enter a number: ";
    cin>>number;
    int b=2;
    bool isPrime=true;
    while(b!=number)
    {
        if(number%b==0)
        {
            isPrime=false;
            break;
        }
        b++;
    }

    if(isPrime)
    {
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
}