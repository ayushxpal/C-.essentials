// Single File Programming Question
// Problem Statement



// Preethi is working at a bookstore and needs to manage the inventory. Her bookstore receives shipments from two different suppliers, and she wants to find the books that are common between the two shipments.



// Preethi wants your help to solve her problem. Help her write a program to find the intersection of the two shipment lists based on the book id numbers and help her update the inventory accordingly using pointer arithmetic.

// Input format :
// The first line contains an integer size1, representing the number of products sold in the first period.

// The second line contains size1 integers, representing the product IDs of the sold products in the first period.

// The third line contains an integer size2, representing the number of products sold in the second period.

// The fourth line contains size2 integers, representing the product IDs of the sold products in the second period.

// Output format :
// If there are common product IDs, they are printed in a single line separated by spaces.

// If there are no common product IDs, the output is "No common IDs found".



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ size1, size2 ≤ 10

// 1 ≤ product ID ≤ 1000

// Sample test cases :
// Input 1 :
// 4
// 101 110 122 157
// 3
// 97 122 157
// Output 1 :
// 122 157 
// Input 2 :
// 3
// 24 8 9
// 4 
// 24 9 10 15
// Output 2 :
// 24 9 
// Input 3 :
// 4
// 101 102 103 104
// 3
// 201 202 203
// Output 3 :
// No common IDs found
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Function to find the common book IDs using pointer arithmetic
void findCommonIDs(int* arr1, int size1, int* arr2, int size2) {
    unordered_set<int> set1(arr1, arr1 + size1);
    vector<int> commonIDs;
    
    // Iterate over the second list and check for common IDs while preserving order
    for (int i = 0; i < size2; ++i) {
        if (set1.find(*(arr2 + i)) != set1.end()) {
            commonIDs.push_back(*(arr2 + i));
            set1.erase(*(arr2 + i)); // Remove from set1 to avoid duplicates
        }
    }

    // Print results
    if (commonIDs.empty()) {
        cout << "No common IDs found" << endl;
    } else {
        for (size_t i = 0; i < commonIDs.size(); ++i) {
            if (i > 0) cout << " ";
            cout << commonIDs[i];
        }
        cout << endl;
    }
}

int main() {
    int size1, size2;

    // Read size and book IDs for the first shipment
    // cout << "Enter number of products in the first period: ";
    cin >> size1;
    int arr1[size1];
    // cout << "Enter product IDs for the first period: ";
    for (int i = 0; i < size1; ++i) {
        cin >> arr1[i];
    }

    // Read size and book IDs for the second shipment
    // cout << "Enter number of products in the second period: ";
    cin >> size2;
    int arr2[size2];
    // cout << "Enter product IDs for the second period: ";
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    // Find and print common book IDs
    findCommonIDs(arr1, size1, arr2, size2);

    return 0;
}