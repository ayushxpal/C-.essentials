// Single File Programming Question
// Problem Statement



// Banu wants to find the number of elements less than or equal to a given key in a sorted array. 



// Help her write a program that takes the array, the size of the array, and the key as input and returns the count of such elements, using the binary search technique.



// Company Tags: Accenture

// Input format :
// The first line of input consists of the integer n, the size of the array.

// The second line consists of n space-separated integers, representing the elements of the sorted array.

// The third line consists of an integer k.

// Output format :
// The output prints the count of elements in the array that are less than or equal to the given value k.

// Code constraints :
// 1 ≤ n ≤ 10

// -100 ≤ elements of the array ≤ 100


#include <iostream>
using namespace std;
int main()
{
    int n, key;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    cin>>key;
    
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=key)
        {
            count++;
            
        }
    }
    
    cout<<count<<endl;
    
    return 0;
}