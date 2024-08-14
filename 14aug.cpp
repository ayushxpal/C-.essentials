#include <iostream>
using namespace std;
int main()
{
    int firstNumber, secondNumber, tempNumber;
    cout<<"enter first number: ";
    cin>>firstNumber;
    cout<<"enter second number: ";
    cin>>secondNumber;
    tempNumber=firstNumber;
    firstNumber=secondNumber;
    secondNumber=tempNumber;
    cout<<"NUMBERS AFTER GETTING SWAPPED: "<<firstNumber<<" "<<secondNumber;
    return 0;

}