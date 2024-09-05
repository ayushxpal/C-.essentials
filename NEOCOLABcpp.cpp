// Single File Programming Question
// Problem Statement



// You are developing a program to determine the maximum number between two input values. To achieve this, you have created a class called NumberComparator. Your goal is to use the "this" pointer concept within this class.

// Input format :
// The input consists of two integer values, n1 and n2, separated by space.

// Output format :
// The program outputs the maximum of the two numbers, followed by the text " is the maximum number".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// -107 ≤ n1, n2 ≤ 107

// Sample test cases :
// Input 1 :
// 20 25
// Output 1 :
// 25 is the maximum number
// Input 2 :
// -21 -58
// Output 2 :
// -21 is the maximum number
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

class NumberComparator {
    int n1, n2;
public:
    NumberComparator(int n1, int n2) {
        this->n1 = n1;
        this->n2 = n2;
    }

    void findMax() {
        if (this->n1 > this->n2) {
            cout << this->n1 << " is the maximum number" << endl;
        } else {
            cout << this->n2 << " is the maximum number" << endl;
        }
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    NumberComparator comparator(n1, n2);
    comparator.findMax();

    return 0;
}
