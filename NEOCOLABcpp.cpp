// Single File Programming Question
// Problem Statement



// Anthony needs to develop a program to sort an array of integers and determine if all the elements are identical. Create a class named ArraySorter that reads an array of 10 integers, sorts them in ascending order if they are not all the same, and prints the sorted array. 



// If all the numbers are identical, the program should output a message indicating that all numbers are the same.

// Input format :
// The input consists of an array of 10 integers separated by space.

// Output format :
// If the numbers are not the same, the output displays "Arranged elements are: " followed by the input array sorted array in ascending order separated by space.

// If the numbers are the same, the output displays "All numbers are the same".



// Refer to the sample output for the formatting specifications.

// Code constraints :
// -105 ≤ each element ≤ 105

// Sample test cases :
// Input 1 :
// 10 12 13 234 45 34 67 78 76 12
// Output 1 :
// Arranged elements are: 10 12 12 13 34 45 67 76 78 234 
// Input 2 :
// 12 12 12 12 12 12 12 12 12 12
// Output 2 :
// All numbers are the same
// Input 3 :
// 1 2 -3 -4 5 -6 7 -8 9 10
// Output 3 :
// Arranged elements are: -8 -6 -4 -3 1 2 5 7 9 10 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <algorithm>
using namespace std;

class ArraySorter {
public:
    int arr[10];  // Array to store 10 integers

    void inputArray() {
        for (int i = 0; i < 10; i++) {
            cin >> arr[i];
        }
    }

    bool allElementsIdentical() {
        for (int i = 1; i < 10; i++) {
            if (arr[i] != arr[0]) {
                return false;  // Not all elements are identical
            }
        }
        return true;  // All elements are identical
    }

    void sortArray() {
        sort(arr, arr + 10);  // Sort the array in ascending order
    }

    void displayResults() {
        if (allElementsIdentical()) {
            cout << "All numbers are the same";
        } else {
            sortArray();
            cout << "Arranged elements are: ";
            for (int i = 0; i < 10; i++) {
                cout << arr[i];
                if (i < 9) cout << " ";  // Print space between elements
            }
        }
    }
};

int main() {
    ArraySorter as;
    as.inputArray();  // Input array elements
    as.displayResults();  // Display sorted results or identical elements message
    return 0;
}
