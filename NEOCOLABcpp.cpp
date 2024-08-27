// Problem Statement



// You are developing a recipe management system that deals with fractional quantities of ingredients. To implement this functionality, you decide to create a Fraction class to handle fractional calculations. The Fraction class has private attributes numerator and a denominator to represent a fraction.



// You need to implement a friend function addMixedFraction(Fraction& , Fraction& ) that takes two Fraction objects as parameters. One of the fractions may be a mixed fraction, where the numerator is greater than the denominator. The function should add the fractions together and return the result as a new Fraction object.



// Write a program that allows users to input the numerators and denominators of two fractions. Create objects of the Fraction class using the input values. Then, use the addMixedFraction function to add the mixed fractions and display the result.



// Example 1



// Input:

// 4 7

// 8 7



// Output:

// 12/7



// Explanation:

// The denominators of both fractions are the same (7), so the function directly adds the numerators and places the sum over the common denominator. Mathematically, 4/7 + 8/7 = (4 + 8) / 7 = 12 / 7.



// Example 2



// Input:

// 3 5

// 6 7



// Output:

// 51/35



// Explanation:

//  As the denominators are different (5 and 7), it finds a common denominator (35) and calculates the sum of numerators: (3 * 7) + (6 * 5) = 21 + 30 = 51. So, 51/35 is printed.



// Example 3



// Input:

// 7 4

// 6 5



// Output:

// 59/20



// Explanation:

// The denominators are different (4 and 5), so a common denominator is found by multiplying them (20). The numerators are calculated by cross-multiplying and adding: (7 * 5) + (6 * 4) = 35 + 24 = 59. So, 59/20 is printed.



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line consists of two space-separated integers, representing the numerator and denominator of the first fraction.

// The second line consists of two space-separated integers, representing the numerator and denominator of the second fraction.

// Output format :
// The output displays the result of adding the two fractions in the following format: numerator/denominator.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1 ≤ numerator ≤ 2000

// 1 ≤ denominator ≤ 100

// Denominators will not be zero

// Sample test cases :
// Input 1 :
// 4 7
// 8 7
// Output 1 :
// 12/7
// Input 2 :
// 3 5
// 6 7
// Output 2 :
// 51/35
// Input 3 :
// 7 4
// 6 5
// Output 3 :
// 59/20
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;
    
public:
    Fraction(int num, int den) : numerator(num), denominator(den) {
        // Normalize the fraction immediately upon creation
        normalize();
    }
    
    // Function to add two fractions
    friend Fraction addMixedFraction(Fraction& f1, Fraction& f2);
    
    // Helper function to print the fraction
    void display() const {
        std::cout << numerator << "/" << denominator;
    }

private:
    // Function to calculate the greatest common divisor (GCD)
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    // Function to reduce the fraction to its simplest form
    void normalize() {
        int gcdValue = gcd(numerator, denominator);
        numerator /= gcdValue;
        denominator /= gcdValue;
    }
};

Fraction addMixedFraction(Fraction& f1, Fraction& f2) {
    // Calculate the new numerator and denominator
    int commonDenominator = f1.denominator * f2.denominator;
    int newNumerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
    
    // Return the result as a new Fraction object
    return Fraction(newNumerator, commonDenominator);
}

int main() {
    int num1, den1, num2, den2;

    // Input the first fraction
    std::cin >> num1 >> den1;
    Fraction fraction1(num1, den1);

    // Input the second fraction
    std::cin >> num2 >> den2;
    Fraction fraction2(num2, den2);

    // Add the two fractions
    Fraction result = addMixedFraction(fraction1, fraction2);

    // Display the result
    result.display();

    return 0;
}