// Problem Statement



// You are working on a project that involves merging K-sorted arrays into a single sorted array. Each array represents the scores of students from different schools in a programming competition. 



// Your task is to develop a program that takes input from the user for K-sorted arrays and merges them into a single sorted array, which will be used for further analysis.



// Company Tags: TCS

// Input format :
// The first line of input consists of an integer K, representing the number of sorted arrays.

// The next 2 * K lines consist of the sizes and elements of each array:

// For each array, the first line consists of an integer n, representing the size of the array.
// The second line consists of n space-separated integers, representing the elements of the sorted array.
// Output format :
// The output prints the merged arrays in descending order, separated by space.



// Refer to the sample output for the formatting specifications.

// Code constraints :
// In this scenario, the test cases fall under the following constraints:

// 1 ≤ K ≤ 3

// 1 ≤ n ≤ 5

// 1 ≤ array elements ≤ 15



#include <iostream>
using namespace std;
int main()
{
    int k;
    cin>>k;
    
    int mergedArray[15];
    int totalSize=0;
    
    for(int i=0; i<k; ++i)
    {
        int n;
        
        cin>>n;
        
        
        
        for(int j=0; j<n; ++j)
        {
            cin>>mergedArray[totalSize];
            totalSize++;
            
        }
    }
    
    for (int i=0; i<totalSize-1; ++i)
    {
        for(int j=i+1; j<totalSize; ++j)
        {
            if (mergedArray[i]<mergedArray[j])
            {
                 int temp = mergedArray[i];
                    mergedArray[i]=mergedArray[j];
                    mergedArray[j]=temp;
                
            }
        }
    }
    
    for(int i=0;i<totalSize;++i)
    {
        cout<<mergedArray[i]<<" ";
    }
    
    return 0;
}