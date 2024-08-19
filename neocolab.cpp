// //Problem Statement



// Imagine you are developing a task management system for a team. One of the features requested by the team is the ability to remove the last task added to the list. Your task is to write a program that takes a list of task IDs and removes the last task from the list. After removing the last task, the program should display the updated list of tasks.

// Input format :
// The first line contains an integer N, representing the number of tasks in the list.

// The second line contains N space-separated integers, representing the task IDs.

// Output format :
// The output prints the updated list of tasks after removing the last task.



// Refer to the sample output for formatting specifications.

// Code constraints :
// 1 ≤ n ≤ 15

// 1 ≤ task IDs ≤ 100


#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    int task_ids[15];
    
    for (int i=0; i<n; i++)
    {
        cin>>task_ids[i];
    }
    
    for (int i=0; i<n-1; i++)
    {
        cout<<task_ids[i]<<" ";
    }
    
    return 0;
}