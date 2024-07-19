#include <iostream>
using namespace std;
int main(){
    int i, max=0;
    int arr[]={12,123,22,3};
    
    for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        // cout<<max<<endl;
    }

        cout<<max<<endl;

}