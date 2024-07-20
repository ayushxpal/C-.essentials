#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    int sum=0;
    while(number!=0)
    {
        int digit=number%10;
        number=number/10;
        sum+=digit;
    }
    cout<<"sum of digit(s): "<<sum<<endl;


}