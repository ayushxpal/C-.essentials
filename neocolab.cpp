// Problem Statement



// You have multiple arrays containing student grades for different subjects. You want to merge these arrays and calculate the average grade for each student. Write a function that takes these arrays as input and returns an array with the average grades.

// Input format :
// The first line of input contains the number of students n.

// The second line of input contains the number of subjects m.

// The next n lines contain m space-separated integers that represent the grades for each student.

// Output format :
// The output displays the average grades for each student in separate lines, as a double value rounded off to one decimal place.



// Refer to the sample output for formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n, m ≤ 10

// 1 ≤ grade ≤ 100


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    
    for( int i=0; i<n; i++)
    {
        int sum = 0;
        
        for (int j=0; j<m; j++)
        {
            int grade;
            cin>>grade;
            sum+=grade;
            
        }
        
        double average = (double)sum/ m;
        cout<<"Student "<<(i+1)<<": "<<fixed<<setprecision(1)<<average<<endl;
    }
    
    return 0;
    
}