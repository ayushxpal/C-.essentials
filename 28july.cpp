// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     int d=2;
//     cout<<"Enter a number: ";
//     cin>>number;
//     bool isPrime=true;

//     while(d!=number)
//     {
//         if(number%d==0)
//         {
//             isPrime=false;
//             break;
//         }

//         d++;
//     }

//     if(isPrime)
//     {
//         cout<<number<<" is a prime number";
//     }
//     else
//     {
//         cout<<number<<" is not a prime number";
//     }

//     return 0;

// }



#include <iostream>
using namespace std;
int reverse(int num)
{
    while(num!=0)
    {
         int rev_num;
    int digit=num%10;
    rev_num=rev_num*10+digit;
    num=num/10;

    }

    // return rev_num;

}
// return rev_num;

    // int rev_num;
    // int digit=num%10;
    // rev_num=rev_num*10+digit;
    // num=num/10;

int main()
{
    int num;
    int b=reverse(num);
    cout<<"enter a number: ";
    cin>>num;
    if(b==num)
    {
        cout<<"PALINDROME";
    }
    else{
        cout<<"not a palindrome";
    }
}
    
