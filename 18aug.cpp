#include <iostream>
using namespace std;
int main()
{
    int arr[]={};
    int n=sizeof(arr) / sizeof(arr[0]);
    if (n==0)
    {
        cout<<"array is empty";

    }

    else{
        cout<<"array is not empty";

    }

    return 0;
}