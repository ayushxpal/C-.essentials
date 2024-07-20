// #include <iostream>
// using namespace std;
// int main(){
//     int number;
//     cout<<"enter a number: ";
//     cin>>number;
//     int sum=0;
//     while(number!=0)
//     {
//         int digit=number%10;
//         number=number/10;
//         sum+=digit;
//     }
//     cout<<"sum of digit(s): "<<sum<<endl;


// }



#include <iostream>
using namespace std;
int main(){
    int arr[]={123,342,45,222};
    int i, max=0;
    for(i=0;i<4;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            
        }
        
    }
    cout<<max<<endl;
}