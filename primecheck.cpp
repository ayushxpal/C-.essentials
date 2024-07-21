#include <iostream>
using namespace std;
int main(){
    int number;
    int d=2;
    cout<<"enter a number: ";
    cin>>number;
    bool prime=true;
    while(d!=number)
    {
        if(number%d==0)
        {
            prime=false;
            break;
        }
        d++;
    }
    if (prime)
    {
        cout<<"prime number"<<endl;
    }
    else
    {
        cout<<"not a prime number"<<endl;
    }

    return 0;

}