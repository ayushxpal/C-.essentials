// // // // // #include <iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int i, max=0;
// // // // //     int arr[]={12,123,22,3};
    
// // // // //     for(i=0;i<4;i++)
// // // // //     {
// // // // //         if(arr[i]>max)
// // // // //         max=arr[i];
// // // // //         // cout<<max<<endl;
// // // // //     }

// // // // //         cout<<max<<endl;

// // // // // }

// // // // #include <iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int number;
// // // //     cout<<"enter a number:";
// // // //     cin>>number;
// // // //     int sum=0;
// // // //     while (number!=0)
// // // //     {
// // // //         int digit=number%10;
// // // //         number=number/10;
// // // //         sum+=digit;
// // // //     }

// // // //     cout<<"sum of digits:"<<sum<<endl;
// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // using namespace std;
// // // int main(){
// // //     int num1;
// // //     cin>>num1;
// // //     int num2;
// // //     cin>>num2;
// // //     cout<<num1<<" "<<num2<<endl;
// // //     int temp1=num1;
// // //     num1=num2;
// // //     num2=temp1;
// // //     cout<<num1<<" "<<num2<<endl;
// // // }

// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int number;
// //     cin>>number;
// //     int sum=0;
// //     while(number!=0)
// //     {
// //         int digit=number%10;
// //         number=number/10;
// //         sum+=digit
// //     }
// // }











// #include <iostream>
// using namespace std;
// int main(){
//     int number1;
//     int number2;
//     cin>>number1>>number2;
//     // cout<<number1<<" "<<number2<<endl;
//     int magic=number1;
//     number1=number2;
//     number2=magic;
//     cout<<number1<<" "<<number2<<endl;
// }

#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int number;
    cout<<"enter any number:";
    cin>>number;
    while(number!=0)
    {
        int digit = number % 10;
        number=number/10;
        sum+=digit;
    }
    cout<<"sum of digits: "<<sum<<endl;
}