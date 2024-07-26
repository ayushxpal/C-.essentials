#include <iostream>
using namespace std;
int main()
{
    int number;
    int rev_number;
    cout<<"enter a number: ";
    cin>>number;
    int original_number=number;
    while (number!=0)
    {
        int digit=number%10;
        rev_number=rev_number*10+digit;
        number = number /10;

    }

    cout<<rev_number<<" is a reverse of "<<original_number;
    return 0;
}