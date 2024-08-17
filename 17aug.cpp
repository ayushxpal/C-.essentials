#include <iostream>
using namespace std;
int main()
{
    int tempnumber, firstnumber, secondnumber;
    cout << "Enter the first number: ";
    cin >> firstnumber;
    cout << "Enter the second number: ";
    cin >> secondnumber;
    tempnumber = firstnumber;
    firstnumber = secondnumber;
    secondnumber = tempnumber;
    cout<<"After swapping, the first number is: "<<firstnumber<<endl;
    cout<<"After swapping, the second number is: "<<secondnumber<<endl;
    return 0;
}