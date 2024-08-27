// Single File Programming Question
// Problem Statement



// A weather forecasting application needs a program that can convert temperature values between Celsius, Fahrenheit, and Kelvin. The program should allow the user to input a temperature in Celsius and display its equivalent values in Fahrenheit and Kelvin.



// You are tasked with creating a temperature conversion program using a class called TemperatureConverter. The program should allow users to input a temperature in Celsius and display its equivalent values in Fahrenheit and Kelvin. Use a non-inline member function to calculate the converted temperatures.



// Formulas:

// Celsius to Fahrenheit	= 9/5 (Celcius) + 32
// Celsius to Kelvin	K = Celcius + 273.15


// Company Tags: Cocubes 

// Input format :
// The input consists of a single line containing a double value representing the temperature in Celsius.

// Output format :
// The first line of the output displays the temperature in Fahrenheit, as a double value rounded to two decimal places.

// The second line of the output displays the temperature in Kelvin, as a double value rounded to two decimal places.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The temperature range is not limited.

// The program should handle positive and negative temperature values.

// Sample test cases :
// Input 1 :
// 25.5
// Output 1 :
// Temperature in Fahrenheit: 77.90
// Temperature in Kelvin: 298.65
// Input 2 :
// 0
// Output 2 :
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
#include <iomanip>  // For setting precision

class TemperatureConverter {
public:
    // Member function to perform the conversions
    void convertFromCelsius(double celsius) {
        double fahrenheit = (9.0/5.0 * celsius) + 32;
        double kelvin = celsius + 273.15;

        // Setting precision to 2 decimal places
        std::cout << std::fixed << std::setprecision(2);

        // Displaying the results
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
        std::cout << "Temperature in Kelvin: " << kelvin << std::endl;
    }
};

int main() {
    // Input temperature in Celsius
    double celsius;
    std::cin >> celsius;

    // Create an instance of the TemperatureConverter
    TemperatureConverter converter;

    // Call the conversion function
    converter.convertFromCelsius(celsius);

    return 0;
}