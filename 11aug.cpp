#include <iostream>
using namespace std;
int main()
{
    char operation;
    float num1, num2;
    cout << "Enter the operation you want to perform: ";
    cin>>operation;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    switch(operation)
    {
        case '+':
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        case '-':
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        case '*':
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        case '/':
        if(num2!=0)
        {
            cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        }
        else
        {
            cout<<"Division by zero is not possible";
        }
        break;
        default:
        cout<<"Invalid operation";
        break;  
        return 0;
    }
}