// Single File Programming Question
// Problem Statement



// Lucas is analyzing a sorted list of numbers and wants to find the first and last occurrences of a specific target value in the list. 



// Given a sorted array of integers and a target value, write a program using binary search to find the indices of the first and last occurrences of the target value. If the target value is not found in the array, indicate that as well.

// Input format :
// The first line of input consists of n, the number of elements in the list.

// The second line consists of n elements, separated by space.

// The third line consists of the target value t.

// Output format :
// If the target value is found, print the index of the first and last occurrence. The index starts from 0.

// If the target value is not found, print "Target value [t] is not found in the array."



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 25

// 1 ≤ elements, t ≤ 100


#include <iostream>
using namespace std;

int findFirstOccurrence(int n, int arr[], int target) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            high = mid - 1; // Move to the left half
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int findLastOccurrence(int n, int arr[], int target) {
    int low = 0, high = n - 1;
    int result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            result = mid;
            low = mid + 1; // Move to the right half
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cin >> target;

    int first = findFirstOccurrence(n, arr, target);
    int last = findLastOccurrence(n, arr, target);

    if (first != -1 && last != -1) {
        cout << "The first occurrence of " << target << " is at index " << first << endl;
        cout << "The last occurrence of " << target << " is at index " << last << endl;
    } else {
        cout << "Target value " << target << " is not found in the array" << endl;
    }

    return 0;
}