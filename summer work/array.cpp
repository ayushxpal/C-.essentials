#include <iostream>
using namespace std;
int main(){
    int arr[] ={1,2,3,4,19,16};
    int i, max = 0 ;
    for (i=0;i<=5;i++){
        if (max<arr[i]){
            max = arr[i];
            // cout<<max<<endl;
        }
    // cout<<max<<endl;
    }
    cout<<max<<endl;
}