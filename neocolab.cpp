// Problem Statement



// You are developing a program that merges two sorted arrays of student IDs.



// The first array contains the student IDs of students who have successfully completed Course A, while the second array contains the student IDs of students who have successfully completed Course B. Your task is to merge these two arrays into a single array such that the second array should be merged with the first array.

// Input format :
// The first line of input consists of an integer n1, representing the size of Course A.

// The second line of input consists of n1 space-separated integers, representing the IDs of course A.

// The third line of input consists of an integer n2, representing the size of Course B.

// The fourth line of input consists of n2 space-separated integers, representing the IDs of course B.

// Output format :
// The output displays the merged array separated by space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ n1, n2 ≤ 10

// 1 ≤ array elements ≤ 25




// You are using GCC
#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin>>n1;
    int courseA[10];
    
    for (int i=0; i<n1; i++)
    {
        cin>>courseA[i];
        
    }
    
    cin>>n2;
    int courseB[10];
    
    for (int i=0; i<n2; i++)
    {
        cin>>courseB[i];
        
    }
    
    int mergedArray[20];
    int k=0;
    
    for (int i=0; i<n2; i++)
    {
        mergedArray[k]=courseB[i];
        k++;
        
    }
    
    for (int i=0; i<n1; i++)
    {
        mergedArray[k]=courseA[i];
        k++;
    }
    
    
   
   for (int i=0; i<k; i++)
   {
       cout<<mergedArray[i]<<" ";
       
   }
   
   return 0;
}

