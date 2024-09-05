// Single File Programming Question
// Problem Statement



// You have been tasked with creating a program that calculates the average word length in a given sentence. Write a function calculateAverageWordLength that takes a sentence (string) as input and returns the average length of the words in the sentence.



// The average word length is calculated by dividing the total number of characters in all words by the number of words in the sentence.



// Company Tags: mPhasis

// Input format :
// The input consists of a sentence as space-separated strings.

// Output format :
// The program outputs the average length of the words in the sentence as a double value rounded off to three decimal places.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ Length of the sentence ≤ 1000

// Sample test cases :
// Input 1 :
// The quick brown fox jumps over the lazy dog.
// Output 1 :
// 4.000
// Input 2 :
// The future is gonna be okay
// Output 2 :
// 3.667
// Input 3 :
// AB CDEF
// Output 3 :
// 3.000
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

// You are using GCC
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;

double calculateAverageWordLength(const string& sentence) {
    istringstream stream(sentence);
    string word;
    int totalChars = 0;
    int wordCount = 0;

    while (stream >> word) {
        totalChars += word.length();
        wordCount++;
    }

    if (wordCount == 0) {
        return 0.0; // Avoid division by zero
    }

    return static_cast<double>(totalChars) / wordCount;
}

int main() {
    string sentence;
    getline(cin, sentence); // Read the entire line of input

    double averageLength = calculateAverageWordLength(sentence);

    cout << fixed << setprecision(3) << averageLength << endl;

    return 0;
}
