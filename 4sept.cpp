// Single File Programming Question
// Problem Statement



// Akshaya is working on a weather monitoring system for a city. The system collects temperature data from various sensors placed throughout the city. Your task is to find the minimum temperature recorded among all the sensors for a given day. using void pointers.

// Input format :
// The first line of input contains an integer, which represents the number of temperature readings recorded for the day.

// The next line of input contains the temperature readings as float values, separated by spaces.

// Output format :
// The output displays the minimum temperature among the recorded values as a float value rounded to one decimal place.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// -100.0 ≤ temperature ≤ 100.0

// Sample test cases :
// Input 1 :
// 5 
// 10.5 5.7 8.9 6.2 7.1
// Output 1 :
// 5.7
// Input 2 :
// 4
// -3.2 0.5 -2.8 -1.9
// Output 2 :
// -3.2
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.



#include <stdio.h>


void findMinTemperature(float *temperatures, int count, float *minTemp) {
    *minTemp = temperatures[0];

    for (int i = 1; i < count; i++) {
        if (*(temperatures + i) < *minTemp) {
            *minTemp = *(temperatures + i);
        }
    }
}

int main() {
    int n;
    
    scanf("%d", &n);

    float temperatures[n];
   
    for (int i = 0; i < n; i++) {
        scanf("%f", &temperatures[i]);
    }

    float minTemp;
    findMinTemperature(temperatures, n, &minTemp);

    printf("%.1f\n", minTemp); // Output the minimum temperature rounded to one decimal place

    return 0;
}// You are using GCC
