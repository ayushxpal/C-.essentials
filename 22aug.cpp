#include <iostream>
using namespace std;
int main()
{
    int array[10], n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    

    for(int i=0; i<n-1; i++)
    {
        array[i]= array[i+1];
    }
    n--;
    for(int i=0; i<n; i++)
    {
        cout<<array[i];
    }
}