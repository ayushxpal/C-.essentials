// Single File Programming Question
// Problem Statement



// Sarah is organizing her digital photo album, which is arranged in a grid. Each cell in the grid represents a photo with a unique ID. She wants to find the exact position of a specific photo ID within the grid. 



// Assist Sarah by writing a program that determines the position of the photo ID in the album using a linear search algorithm.

// Input format :
// The first line of input consists of an integer, m, representing the number of rows in the album.

// The second line consists of an integer, n, representing the number of columns in the album.

// The next m lines contain n space-separated integers, representing the photo IDs in the album grid.

// The last line of input consists of an integer, target, representing the photo ID Sarah is searching for.

// Output format :
// The output prints the position of the target photo ID if found. The index starts from 0.

// If the photo ID is not found, it prints "Element [target] not found."



// Refer to the sample output for the exact format.

// Code constraints :
// 1 ≤ m, n ≤ 10

// 1 ≤ array elements ≤ 500

// Sample test cases :


#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    
    int photoAlbum[m][n];
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> photoAlbum[i][j];
        }
    }
    
    int target;
    cin >> target;
    
    bool found = false;
    
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (photoAlbum[i][j] == target) {
                cout << "[" << i << "][" << j << "]" << endl;
                found = true;
                break; // Exit the inner loop if found
            }
        }
        if (found) break; // Exit the outer loop if found
    }
    
    if (!found) {
        cout << "Element " << target << " not found." << endl;
    }
    
    return 0;
}// You are using GCC
