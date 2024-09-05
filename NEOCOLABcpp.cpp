// Output format :
// The program will output the following in separate lines:

// The total sum of all expenses as a double value rounded to two decimal places.
// The total sum of expenses for the specific category as a double value rounded to two decimal places.


// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1.0 ≤ expense ≤ 10000.0

// Sample test cases :
// Input 1 :
// 4
// Food 25.50 2023-01-15
// Transportation 12.75 2023-01-16
// Shopping 50.00 2023-01-18
// Food 15.25 2023-01-20
// Food
// Output 1 :
// Total Expenses: 103.50
// Food: 40.75
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class Expense {
public:
    string category;
    double amount;
    string date;

    Expense(const string& cat, double amt, const string& dt)
        : category(cat), amount(amt), date(dt) {}
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); // To ignore the newline character after the integer input

    vector<Expense> expenses;
    
    // Read expenses
    for (int i = 0; i < n; ++i) {
        string category;
        double amount;
        string date;
        cin >> category >> amount >> date;
        expenses.emplace_back(category, amount, date);
    }

    string targetCategory;
    cin.ignore(); // To ignore the newline character after the last input
    getline(cin, targetCategory);

    double totalExpenses = 0.0;
    double categoryTotal = 0.0;

    // Calculate totals
    for (const auto& exp : expenses) {
        totalExpenses += exp.amount;
        if (exp.category == targetCategory) {
            categoryTotal += exp.amount;
        }
    }

    // Output results
    cout << fixed << setprecision(2);
    cout << "Total Expenses: " << totalExpenses << endl;
    cout << targetCategory << ": " << categoryTotal << endl;

    return 0;
}
