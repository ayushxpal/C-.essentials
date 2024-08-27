// Problem Statement



// John is developing a simulation system for different types of vehicles to calculate their speeds under various conditions using function overloading. The system can compute the speed of a car, a train, and a plane based on the given distance, time, and additional acceleration values.



// Formula:

// The speed of the car is calculated using the formula: speed = distance/time

// The speed of the train or plane is calculated using the formula: speed = (distance/time) + acceleration*time



// Example



// Input:

// 100.5

// 10.0

// 5.5

// 6.6



// Output:

// 10.05

// 65.05

// 76.05



// Function Specifications:

// double calculateSpeed(double distance, double time)

// double calculateSpeed(double distance, double time, double acceleration)



// Note: This is a sample question asked in Capgemini recruitment.

// Input format :
// The first line of input consists of the distance(in meters) as a double value.

// The second line of input consists of the time(in seconds) as a double value.

// The third line of input consists of the acceleration(in m/s2) of the train as a double value.

// The third line of input consists of the acceleration(in m/s2) of the plane as a double value.

// Output format :
// The first line of output prints the speed of the car(m/s) rounded off to two decimal places.

// The second line of output prints the speed of the train(m/s) rounded off to two decimal places.

// The third line of output prints the speed of the plane(m/s) rounded off to two decimal places.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// 1.0 ≤ distance ≤ 10000.0

// 1.0 ≤ time ≤ 100.0

// 1.0 ≤ accelerations of train and plane ≤ 50.0

// Sample test cases :
// Input 1 :
// 100.5
// 10.0
// 5.5
// 6.6
// Output 1 :
// 10.05
// 65.05
// 76.05
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


// You are using GCC
#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate speed of a car
double calculateSpeed(double distance, double time) {
    return distance / time;
}

// Function to calculate speed of a train or plane
double calculateSpeed(double distance, double time, double acceleration) {
    return (distance / time) + (acceleration * time);
}

int main() {
    double distance, time, trainAcceleration, planeAcceleration;

    // Input the values
    cin >> distance >> time >> trainAcceleration >> planeAcceleration;

    // Calculate and print the speed of the car
    double carSpeed = calculateSpeed(distance, time);
    cout << fixed << setprecision(2) << carSpeed << endl;

    // Calculate and print the speed of the train
    double trainSpeed = calculateSpeed(distance, time, trainAcceleration);
    cout << fixed << setprecision(2) << trainSpeed << endl;

    // Calculate and print the speed of the plane
    double planeSpeed = calculateSpeed(distance, time, planeAcceleration);
    cout << fixed << setprecision(2) << planeSpeed << endl;

    return 0;
}