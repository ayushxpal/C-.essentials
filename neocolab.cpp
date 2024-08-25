// Single File Programming Question
// Problem Statement



// Vishwas wants to spend the weekend watching some short films. He has a finite array of short films in front of him. He prefers to watch the highly-rated short film first.



// As he already knows selection sorting, he wants to sort them in such a fashion. Write a code to use selection sort and display flows step by step in his perception in descending order achieved by swapping the maximum elements to the front of every iteration.



// Company Tags: CTS

// Input format :
// The first line of input consists of an integer n, representing the number of short films.

// The second line of input consists of n space-separated integers, representing the ratings of the short films.

// Output format :
// The output displays the array after each step of the selection sort, followed by the final sorted array.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 15

// 0 ≤ ratings ≤ 30

// Sample test cases :
// Input 1 :
// 5
// 3 4 5 1 2
// Output 1 :
// After his step: 1
// 5 4 3 1 2 
// After his step: 2
// 5 4 3 1 2 
// After his step: 3
// 5 4 3 1 2 
// After his step: 4
// 5 4 3 2 1 
// Finally, he got it
// 5 4 3 2 1 
// Input 2 :
// 8
// 9 4 2 5 6 3 0 1
// Output 2 :
// After his step: 1
// 9 4 2 5 6 3 0 1 
// After his step: 2
// 9 6 2 5 4 3 0 1 
// After his step: 3
// 9 6 5 2 4 3 0 1 
// After his step: 4
// 9 6 5 4 2 3 0 1 
// After his step: 5
// 9 6 5 4 3 2 0 1 
// After his step: 6
// 9 6 5 4 3 2 0 1 
// After his step: 7
// 9 6 5 4 3 2 1 0 
// Finally, he got it
// 9 6 5 4 3 2 1 0 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the


#include <iostream>
#include <vector>

void selectionSortDesc(std::vector<int>& ratings) {
    int n = ratings.size();
    for (int i = 0; i < n - 1; ++i) { // Adjusted to n-1
        int maxIndex = i;
        // Find the maximum element in the unsorted part
        for (int j = i + 1; j < n; ++j) {
            if (ratings[j] > ratings[maxIndex]) {
                maxIndex = j;
            }
        }
        // Swap the found maximum element with the first element
        std::swap(ratings[i], ratings[maxIndex]);

        // Display the array after each step
        std::cout << "After his step: " << i + 1 << std::endl;
        for (int k = 0; k < n; ++k) {
            std::cout << ratings[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> ratings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> ratings[i];
    }

    // Perform selection sort in descending order
    selectionSortDesc(ratings);

    // Print the final sorted array
    std::cout << "Finally, he got it" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cout << ratings[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}