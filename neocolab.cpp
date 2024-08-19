#include <iostream>
using namespace std;
#include <vector>

vector<int> modifyArray(int n, vector<int>& arr)
{
    if (n==1)
    {
        return arr;
    }
    
    vector<int> modifiedArr(n);
    modifiedArr[0] = arr[0] * arr[1];
    
    for (int i=1; i<n-1; i++)
    {
        modifiedArr[i] = arr[i -1] * arr[i+1];
    }
    
    modifiedArr[n-1]=arr[n-1]*arr[n-2];
    
    return modifiedArr;
    
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    vector<int> result = modifyArray(n, arr);
    
    for(int i=0; i<n; i++)
    {
        
        cout<<result[i];
        
        if(i != n -1)
        {
            cout<<" ";
        }
    }
    
    return 0;
    
}