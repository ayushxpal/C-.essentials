// Single File Programming Question
// Problem Statement



// You are tasked with designing a simple airline reservation system for a small airline company. The system should allow the airline to manage and provide information about their flight destinations and the number of flights available to each destination.



// You need to implement a class named Airline with the following functions:

// void initialize(): Initializes the airline's system with no destinations and no flights.
// void addDestination (int, int): Adds a new destination and the number of flights available to that destination. The system can store up to 100 destinations.
// int checkFlights (int): Checks and returns the number of available flights to a specific destination. If the destination is not found, it returns -1.
// Input format :
// The first input consists of an integer n, representing the number of destinations the airline wants to add.

// The next n lines consist of two space-separated integers for each destination: destination code and number of flights available.

// The last input consists of an integer search for destination Q.

// Output format :
// The output displays the following one of the format:

// If the search destination is found in the system, it prints the number of available flights to that destination.

// If the search destination is not found in the system, it prints "Destination not found."



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n ≤ 50

// Sample test cases :
// Input 1 :
// 3
// 101 5
// 102 3
// 103 7
// 102
// Output 1 :
// 3
// Input 2 :
// 4
// 201 8
// 202 4
// 203 6
// 204 2
// 205
// Output 2 :
// Destination not found
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.

#include <iostream>
#include <unordered_map>
using namespace std;

class Airline {
private:
    unordered_map<int, int> destinations; // Stores destination code and number of flights

public:
    // Initializes the airline's system with no destinations and no flights
    void initialize() {
        destinations.clear();
    }

    // Adds a new destination and the number of flights available to that destination
    void addDestination(int destinationCode, int numberOfFlights) {
        if (destinations.size() < 100) { // Ensure we do not exceed 100 destinations
            destinations[destinationCode] = numberOfFlights;
        }
    }

    // Checks and returns the number of available flights to a specific destination
    int checkFlights(int destinationCode) {
        if (destinations.find(destinationCode) != destinations.end()) {
            return destinations[destinationCode];
        } else {
            return -1;
        }
    }
};

int main() {
    Airline airline;
    airline.initialize();

    int n;
    cin >> n; // Number of destinations

    for (int i = 0; i < n; ++i) {
        int destinationCode, numberOfFlights;
        cin >> destinationCode >> numberOfFlights;
        airline.addDestination(destinationCode, numberOfFlights);
    }

    int searchDestination;
    cin >> searchDestination;

    int result = airline.checkFlights(searchDestination);
    if (result != -1) {
        cout << result << endl;
    } else {
        cout << "Destination not found" << endl;
    }

    return 0;
}
