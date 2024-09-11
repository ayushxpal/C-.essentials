// // Single File Programming Question
// // Problem Statement



// // You are tasked with creating a simple calculator program that performs various arithmetic operations on two integers. The program should allow the user to input two integers and then calculate and display the results of addition, subtraction, multiplication, division, and modulus.



// // Requirements:



// // The program should prompt the user to enter two integers.
// // It should provide the following functionalities:
// // Calculate and display the sum of the two integers.
// // Calculate and display the difference between the two integers.
// // Calculate and display the product of the two integers.
// // Calculate and display the division of the first integer by the second, with a check to prevent division by zero.
// // Calculate and display the modulus of the first integer by the second, also ensuring that division by zero does not occur.
// // Input format :
// // The input consists of two integer values a and b.

// // Output format :
// // The output prints the result of arithmetic operations.



// // Refer to the sample outputs for formatting specifications.

// // Code constraints :
// // In this scenario, the test cases fall under the following constraints:

// // -1000 ≤ a, b ≤ 1000


// #include <iostream>
// using namespace std;
// class Calculator
// {
//     public:
//     int a,b;
//     void getinput()
//     {
//         cout<<"enter two numbers: ";
//         cin>>a>>b;

//     }

//     void getoutput()
//     {
//         cout<<"sum: "<<a+b<<endl;
//         cout<<"difference: "<<a-b<<endl;
//         cout<<"multilpication: "<<a*b<<endl;
//         if(b!=0)
//         {
//             cout<<"division: "<<a/b<<endl;
//             cout<<"modulus: "<<a%b<<endl;
            
//         }
//         else
//         {
//             cout<<"Division by zero not possible"<<endl;
//             cout<<"Division by zero not possible"<<endl;
//         }
//     }
// };

// int main()
// {
//     Calculator calc;
//     calc.getinput();
//     calc.getoutput();
//     return 0;
// }


// Single File Programming Question
// Problem Statement



// Zara is developing a navigation system for a robot. The system uses directions to determine the robot's movement. So, implement a Navigator class that can receive direction input and provide corresponding navigation instructions.
// A weather forecasting application needs a program that can convert temperature values between Celsius, Fahrenheit, and Kelvin. The program should allow the user to input a temperature in Celsius and display its equivalent values in Fahrenheit and Kelvin.



// In this scenario, the program allows you to input a direction using integer values representing the cardinal directions (North, East, West, and South). The code then utilizes the Navigator class to determine the corresponding navigation instruction based on the input direction.
// You are tasked with creating a temperature conversion program using a class called TemperatureConverter. The program should allow users to input a temperature in Celsius and display its equivalent values in Fahrenheit and Kelvin. Use a non-inline member function to calculate the converted temperatures.



// Create an enum with all four directions: North, East, West, and South as the constants.
// Formulas:

// Celsius to Fahrenheit	= 9/5 (Celcius) + 32
// Celsius to Kelvin	K = Celcius + 273.15


// We will then use the switch case statements to switch between the direction elements and print the output based on the value of the variable for the enum directions. Write a program to print the direction it is heading towards.
// Company Tags: Cocubes 

// Input format :
// The input consists of an integer representing the direction.
// The input consists of a single line containing a double value representing the temperature in Celsius.

// Output format :
// The output prints whether the direction is North (or) South (or) East (or) West (or) Invalid Input.
// The first line of the output displays the temperature in Fahrenheit, as a double value rounded to two decimal places.

// The second line of the output displays the temperature in Kelvin, as a double value rounded to two decimal places.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 represents North.

// 2 represents East.

// 3 represents West.
// The temperature range is not limited.

// 4 represents South.
// The program should handle positive and negative temperature values.

// Sample test cases :
// Input 1 :
// 1
// 25.5
// Output 1 :
// We are headed towards North.
// Temperature in Fahrenheit: 77.90
// Temperature in Kelvin: 298.65
// Input 2 :
// 12
// 0
// Output 2 :
// Invalid Input
// Temperature in Fahrenheit: 32.00
// Temperature in Kelvin: 273.15
// Input 3 :
// -22
// Output 3 :
// Temperature in Fahrenheit: -7.60
// Temperature in Kelvin: 251.15
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

#include <iostream>
#include <iomanip>
using namespace std;
enum Directions
{
    North = 1,
    East = 2,
    West = 3,
    South = 4
};



void printdirection(int direction)
{
    switch(direction)
    {
        case North:
        cout<<"We are headed towards North."<<endl;
        break;

        case East:
        cout<<"We are headed towards East."<<endl;
        break;

        case West:
        cout<<"We are headed towards West."<<endl;
        break;

        case South:
        cout<<"We are headed towards South."<<endl;
        break;

        default:
        cout<<"Invalid Input"<<endl;
        break;
    }
}

void converttemp(double celsius)
{
    double fahrenheit = (9/5)*celsius + 32;
    double kelvin = celsius + 273.15;

    cout<<fixed<<setprecision(2);
    cout<<"Temperature in Fahrenheit: "<<fahrenheit<<endl;
    cout<<"Temperature in Kelvin: "<<kelvin<<endl;

}



int main()
{
    int direction;
    double celsius;
    cin>>direction;
    cin>>celsius;
    printdirection(direction);
    converttemp(celsius);
    return 0;
}