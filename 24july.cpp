#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    cout<<"enter any number: ";
    cin>>number;
    while(number!=0)
    {
        int digit = number % 10;
        number = number / 10;
        sum+=digit;
    }

    cout<<"sum of digits: "<<sum;

}