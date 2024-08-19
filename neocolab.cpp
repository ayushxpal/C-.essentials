// Problem Statement



// In a survey, a research company collected responses represented by integers. Due to multiple responses, some integers appear more frequently than others. Write a program that takes the number of responses and the responses themselves as input, then outputs the frequency of each unique response.



// Company Tags: CTS

// Input format :
// The first line of input consists of an integer n, which represents the number of responses.

// The second line consists of n space-separated integers that represent the responses.

// Output format :
// The program outputs a series of lines, each representing the frequency of responses.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 25

// 1 ≤ responses ≤ 50


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int responses[25];
    int frequency[51]={0};
    
    
    
    for (int i=0; i<n; i++)
    {
        cin >> responses[i];
        frequency[responses[i]]++;
    }
    
    for (int i=1; i<=50; i++)
    {
        if (frequency[i]>0)
        {
            cout<<i<<": "<<frequency[i]<<endl;
        }
    }
    
    return 0;
}

