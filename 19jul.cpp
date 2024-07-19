// #include <iostream>
// using namespace std;
// int main(){
//     int i, max=0;
//     int arr[]={12,123,22,3};
    
//     for(i=0;i<4;i++)
//     {
//         if(arr[i]>max)
//         max=arr[i];
//         // cout<<max<<endl;
//     }

//         cout<<max<<endl;

// }

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number:";
    cin>>number;
    int sum=0;
    while (number!=0)
    {
        int digit=number%10;
        number=number/10;
        sum+=digit;
    }

    cout<<"sum of digits:"<<sum<<endl;
    return 0;
}