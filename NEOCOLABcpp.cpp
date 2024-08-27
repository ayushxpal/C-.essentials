// Problem statement

// ﻿

// Design a banking system to handle account transactions. The system should allow users to deposit and withdraw money from their accounts. Each account is associated with an account holder's name, account number, and balance. 



// Implement the system using a union named AccountData that contains a structure with fields for the account holder's name, account number, and balance. 

// Input format :
// The first line consists of the account holder's name as a string.

// The second line consists of the account number as an integer.

// The third line consists of the initial balance as a double value.

// The fourth line consists of the amount to deposit as a double value.

// The fifth line consists of the amount to withdraw as a double value.

// Output format :
// The first line of output prints "Amount deposited successfully." after processing the deposit.

// The second line of output prints:

// "Amount withdrawn successfully." if the withdrawal is successful.
// "Insufficient balance. Withdrawal failed." if the balance is insufficient.
// The third line of output prints "Account details:".

// The fourth line of output prints "Account holder's name: <name>", where <name> is the account holder's name.

// The fifth line of output prints "Account number: <number>", where <number> is the account number.

// The sixth line of output prints "Balance: <balance>", where <balance> is the remaining balance after transactions, formatted to two decimal places.



// Refer to sample input and output specifications

// Code constraints :
// The account holder's name should not exceed 50 characters.

// The initial balance, deposit amount, and withdrawal amount should be non-negative double values.

// Sample test cases :
// Input 1 :
// John Doe
// 123456
// 5000
// 1000
// 500
// Output 1 :
// Amount deposited successfully.
// Amount withdrawn successfully.
// Account details:
// Account holder's name: John Doe
// Account number: 123456
// Balance: 5500.00
// Input 2 :
// Alice Smith
// 987654
// 8000
// 1500
// 10000
// Output 2 :
// Amount deposited successfully.
// Insufficient balance. Withdrawal failed.
// Account details:
// Account holder's name: Alice Smith
// Account number: 987654
// Balance: 9500.00
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.
// Marks : 10
// Negative Marks : 0


// You are using GCC
#include <iostream>
#include <iomanip>
#include <cstring>

union AccountData {
    struct {
        char name[51];      // Account holder's name
        int accountNumber;  // Account number
        double balance;     // Account balance
    } account;
};

int main() {
    AccountData accountData;

    // Input account holder's name
    std::cin.getline(accountData.account.name, 51);

    // Input account number
    std::cin >> accountData.account.accountNumber;

    // Input initial balance
    std::cin >> accountData.account.balance;

    double depositAmount, withdrawAmount;

    // Input deposit amount
    std::cin >> depositAmount;

    // Input withdrawal amount
    std::cin >> withdrawAmount;

    // Process deposit
    accountData.account.balance += depositAmount;
    std::cout << "Amount deposited successfully." << std::endl;

    // Process withdrawal
    if (withdrawAmount <= accountData.account.balance) {
        accountData.account.balance -= withdrawAmount;
        std::cout << "Amount withdrawn successfully." << std::endl;
    } else {
        std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
    }

    // Print account details
    std::cout << "Account details:" << std::endl;
    std::cout << "Account holder's name: " << accountData.account.name << std::endl;
    std::cout << "Account number: " << accountData.account.accountNumber << std::endl;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Balance: " << accountData.account.balance << std::endl;

    return 0;
}