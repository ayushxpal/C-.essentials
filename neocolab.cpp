// Problem Statement



// You're an instructor managing a list of exam scores for a group of students. The scores are stored in an array, and you need to sort this array in ascending order so that you can easily identify the highest and lowest scores. You'll use two different sorting algorithms: bubble sort and selection sort.



// Bubble sort is selected if the array is nearly sorted. An array is considered nearly sorted if at most one pair of elements is out of order. The selection sort is chosen if the array is not nearly sorted.

// Input format :
// The first line of input contains an integer n, representing the number of students.

// The second line contains n space-separated integers, representing the exam scores of students.

// Output format :
// The first line of output prints which sort algorithm is used, either "Using Bubble Sort" or "Using Selection Sort".

// The second line prints the sorted exam scores in ascending order.



// Refer to the sample output for formatting specifications.

// Code constraints :
// The given test cases fall under the following constraints:

// 1 ≤ n ≤ 20

// 1 ≤ exam score ≤ 100

// Sample test cases :
// Input 1 :
// 6
// 64 78 85 92 99 73
// Output 1 :
// Using Bubble Sort
// Sorted Exam Scores: 64 73 78 85 92 99 
// Input 2 :
// 5
// 32 91 53 76 28
// Output 2 :
// Using Selection Sort
// Sorted Exam Scores: 28 32 53 76 91 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

#include <iostream>
#include <vector>

using namespace std;

// Function to determine if the array is nearly sorted
bool isNearlySorted(const vector<int>& scores) {
    int outOfOrder = 0;
    for (int i = 0; i < scores.size() - 1; ++i) {
        if (scores[i] > scores[i + 1]) {
            outOfOrder++;
            if (outOfOrder > 1) {
                return false; // More than one pair out of order
            }
        }
    }
    return true; // Zero or one pair out of order
}

// Bubble sort function
void bubbleSort(vector<int>& scores) {
    int n = scores.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (scores[j] > scores[j + 1]) {
                swap(scores[j], scores[j + 1]);
            }
        }
    }
}

// Selection sort function
void selectionSort(vector<int>& scores) {
    int n = scores.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (scores[j] < scores[minIndex]) {
                minIndex = j;
            }
        }
        swap(scores[i], scores[minIndex]);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> scores(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }

    if (isNearlySorted(scores)) {
        cout << "Using Bubble Sort" << endl;
        bubbleSort(scores);
    } else {
        cout << "Using Selection Sort" << endl;
        selectionSort(scores);
    }
    
    cout << "Sorted Exam Scores:";
    for (const int& score : scores) {
        cout << " " << score;
    }
    cout << endl;
    
    return 0;
}