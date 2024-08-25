// Single File Programming Question
// Problem Statement



// Imagine you are working on a student management system for a school. As part of the system, you need to develop a feature that allows teachers to enter the names of students in a class and obtain a sorted list of student names. This will help them organize the students alphabetically for various administrative tasks.



// Write a program that takes input for the number of students in the class and their names. The program should then sort the names in ascending order using bubble sort and display the sorted list.



// Company Tags: TCS 

// Input format :
// The first line of input consists of the number of students n in the class.

// The second line of input consists of n space separated strings, representing students' names.

// Output format :
// The output prints the students' names in sorted order, separated by space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// The strings contains both lowercases and uppercases with at most 50 character.

// You are using GCC
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void bubbleSort(std::vector<std::string>& names) {
    int n = names.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            // Compare adjacent elements, using case insensitivity
            if (std::lexicographical_compare(names[j+1].begin(), names[j+1].end(),
                                             names[j].begin(), names[j].end(),
                                             [](unsigned char a, unsigned char b) { return std::tolower(a) < std::tolower(b); })) {
                // Swap if the elements are in the wrong order
                std::swap(names[j], names[j+1]);
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore(); // Ignore newline after the integer input
    
    std::vector<std::string> names(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> names[i];
    }

    // Sort the names using bubble sort
    bubbleSort(names);

    // Print the sorted names
    for (int i = 0; i < n; ++i) {
        std::cout << names[i];
        if (i != n - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}