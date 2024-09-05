// Single File Programming Question
// Problem Statement



// You are tasked with creating a program for an online shop to calculate the total number of items purchased for a single product. The program should take the product name and the number of items purchased by three persons and then calculate and display the total number of items for that product using member functions.

// Input format :
// The first line consists of a string representing the product name.

// The second line consists of three integers a, b, and c representing the number of items purchased by three different persons.

// Output format :
// The program prints the product name and the sum of the total number of items purchased for the product in separate lines.



// Refer to the sample output for the exact format.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ a, b, c ≤ 1000

// Sample test cases :
// Input 1 :
// Phone
// 2 5 4
// Output 1 :
// Product Name: Phone
// Total items: 11
// Input 2 :
// Shirt
// 278 499 790
// Output 2 :
// Product Name: Shirt
// Total items: 1567
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

#include <iostream>
#include <string>
using namespace std;

class Shop {
private:
    string productName;
    int items1, items2, items3;

public:
    // Function to set the product name and items purchased by three persons
    void setData(const string &name, int a, int b, int c) {
        productName = name;
        items1 = a;
        items2 = b;
        items3 = c;
    }

    // Function to calculate the total number of items
    int calculateTotalItems() const {
        return items1 + items2 + items3;
    }

    // Function to display the product name and total items
    void display() const {
        cout << "Product Name: " << productName << endl;
        cout << "Total items: " << calculateTotalItems() << endl;
    }
};

int main() {
    Shop shop;
    
    string productName;
    int a, b, c;

    // Input the product name
    getline(cin, productName);
    // Input the number of items purchased by three persons
    cin >> a >> b >> c;

    // Set the data in the Shop class
    shop.setData(productName, a, b, c);

    // Display the results
    shop.display();

    return 0;
}
