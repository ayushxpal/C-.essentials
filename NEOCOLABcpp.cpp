// Single File Programming Question
// Problem Statement



// Imagine you are developing a ticketing system for a theater. As part of the system, you need to implement a feature that allows customers to search for available seats based on their preferences. The seat availability data is stored in a 1D array.



// Create a class called ArraySearch and calculate the seat availability. Write the code for the same.



// Note: This is a sample question asked in a HCL interview.

// Input format :
// The first line of the input consists of the number of seats, n.

// The next line of input consists of n space-separated seat numbers as integers.

// The last line of input is the seat number to be searched (m).

// Output format :
// The output prints the status of the seat availability.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 10

// 1 ≤ seat numbers ≤ 100

// 1 ≤ m ≤ 100

// Sample test cases :
// Input 1 :
// 5
// 50 40 10 20 30
// 20
// Output 1 :
// Seat is available
// Input 2 :
// 5
// 50 40 30 10 20
// 80
// Output 2 :
// Seat is not available
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
using namespace std;

class ArraySearch {
public:
    int seats[10];  // Array to store seat numbers
    int n;          // Number of seats

    void inputSeats() {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> seats[i];
        }
    }

    bool searchSeat(int seatNumber) {
        for (int i = 0; i < n; i++) {
            if (seats[i] == seatNumber) {
                return true;  // Seat found
            }
        }
        return false;  // Seat not found
    }
};

int main() {
    ArraySearch as;
    as.inputSeats();  // Input seat numbers

    int m;  // Seat number to search
    cin >> m;

    if (as.searchSeat(m)) {
        cout << "Seat is available";
    } else {
        cout << "Seat is not available";
    }

    return 0;
}
