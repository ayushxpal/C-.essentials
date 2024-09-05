// Single File Programming Question
// Problem Statement



// Akil is a sales manager who wants to evaluate the performance of his sales team. He wants to create a program that allows him to enter the details of a salesperson, including their name and the total sales achieved over a specific number of months. Calculate the average sales per month and display the salesperson's information using a pointer to the data member.

// Input format :
// The first line of input consists of the salesperson's name as a string.

// The second line of input consists of the number of months as an integer.

// For each month, the sales achieved during that month are represented as an integer number.

// Output format :
// The first line of output consists of the details of the salesperson as: "Salesperson Details:"

// The second line of output contains the salesperson's name.

// The third line of output contains the total sales as an integer.

// The last line of output contains the average sales as an integer.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ number of months ≤ 10

// Sample test cases :
// Input 1 :
// John
// 5
// 1000 2000 1500 3000 2500
// Output 1 :
// Salesperson Details:
// Name: John
// Total Sales: 10000
// Average Sales: 2000
// Input 2 :
// Emily
// 3
// 500 750 900
// Output 2 :
// Salesperson Details:
// Name: Emily
// Total Sales: 2150
// Average Sales: 716
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>
#include <string>
using namespace std;

class Salesperson {
public:
    string name;
    int totalSales;
    int months;

    void calculateTotalSales(int sales[]) {
        totalSales = 0;
        for (int i = 0; i < months; i++) {
            totalSales += sales[i];
        }
    }

    void displaySalesDetails() {
        int Salesperson::*totalSalesPtr = &Salesperson::totalSales;
        cout << "Salesperson Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Total Sales: " << this->*totalSalesPtr << endl;
        cout << "Average Sales: " << (this->*totalSalesPtr) / months << endl;
    }
};

int main() {
    Salesperson sp;
    
    // Input salesperson's name
    getline(cin, sp.name);
    
    // Input number of months
    cin >> sp.months;
    
    // Input sales data
    int sales[10];  // Array to store sales data (up to 10 months)
    for (int i = 0; i < sp.months; i++) {
        cin >> sales[i];
    }

    // Calculate total sales
    sp.calculateTotalSales(sales);
    
    // Display sales details
    sp.displaySalesDetails();

    return 0;
}
