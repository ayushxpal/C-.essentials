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
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
    cout<<"enter the numbers: ";
    cin>>number1>>number2;
    number1=number1+number2;
    number2=number1-number2;
    number1=number1-number2;
    cout<<"numbers after swapping: "<<number1<<" "<<number2<<endl;
    return 0;
}