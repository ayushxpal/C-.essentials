// Single File Programming Question
// Problem Statement



// You are tasked with creating a simple calculator program that performs various arithmetic operations on two integers. The program should allow the user to input two integers and then calculate and display the results of addition, subtraction, multiplication, division, and modulus.



// Requirements:



// The program should prompt the user to enter two integers.
// It should provide the following functionalities:
// Calculate and display the sum of the two integers.
// Calculate and display the difference between the two integers.
// Calculate and display the product of the two integers.
// Calculate and display the division of the first integer by the second, with a check to prevent division by zero.
// Calculate and display the modulus of the first integer by the second, also ensuring that division by zero does not occur.
// Input format :
// The input consists of two integer values a and b.

// Output format :
// The output prints the result of arithmetic operations.



// Refer to the sample outputs for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// -1000 ≤ a, b ≤ 1000



#include <iostream>
using namespace std;

class Operation
{
    public:
    int a, b;
    
    Operation(int x, int y)
    {
        a=x;
        b=y;
    }
    
    int add()
    {
        return a+b;
        
    }
    
    int diff()
    {
        return a-b;
    }
    
    int prod()
    {
        return a*b;
    }
    
    string div()
    {
        if(b==0)
        {
            return "Division by zero not possible";
        }
        
        else
        {
            return "Division of two numbers: " + to_string(a/b);
        }
    }
    
    string mod()
    {
        if (b==0)
        {
            return "Division by zero not possible";
        }
        else
        {
            return "Modulus of two numbers: "+ to_string(a % b);
        }
    }
};

int main()
{
    int a, b;
    cin>>a>>b;
    
    Operation opp(a, b);
    
    cout<<"Addition of two numbers: "<<opp.add()<<endl;
    cout<<"Difference of two numbers: "<<opp.diff()<<endl;
    cout<<"Product of two numbers: "<<opp.prod()<<endl;
    cout<<opp.div()<<endl;
    cout<<opp.mod()<<endl;
    return 0;
}


























































