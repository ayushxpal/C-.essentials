#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5};
    int newElement=9;

    int size=0;
    while(size<10 && arr[size]!=0)
    {
        size++;
    }

    arr[size]=newElement;

    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
    
}