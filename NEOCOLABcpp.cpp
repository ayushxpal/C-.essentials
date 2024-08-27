// Single File Programming Question
// Problem Statement



// Guna is developing a banking application that allows customers to deposit money into their accounts. The bank provides each customer with an initial balance of 50 rupees. To facilitate the deposit process, Guna has created a class called AddAmount.



// This class represents a transaction to add a specific amount of money to a customer's account. After the transaction is completed, the total amount in the customer's account is printed.

// Input format :
// The input consists of a single integer, representing the additional amount to be deposited into the customer's account (the deposit amount).

// Output format :
// The output displays the total amount in the customer's account after the deposit.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The input deposit amount is a non-negative integer.

// Sample test cases :
// Input 1 :
// 400
// Output 1 :
// 450
// Input 2 :
// 250
// Output 2 :
// 300
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
// Marks : 10
// Negative Marks : 0

// You are using GCC
#include <iostream>

class AddAmount {
private:
    int balance;

public:
    // Constructor which initializes the balance and performs deposit
    AddAmount(int depositAmount) {
        balance = 50; // Initial balance
        balance += depositAmount; // Add the deposit amount
    }

    // Method to display the total balance
    void displayTotalAmount() const {
        std::cout << balance;
    }
};

int main() {
    int depositAmount;

    // Input the amount to be deposited
    std::cin >> depositAmount;

    // Create an object of AddAmount with the provided deposit amount
    AddAmount transaction(depositAmount);

    // Display the total balance after the deposit
    transaction.displayTotalAmount();

    return 0;
}