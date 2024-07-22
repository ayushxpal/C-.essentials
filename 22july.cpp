// #include <iostream>
// using namespace std;
// int main(){
//     int number;
//     int d=2;
//     cout<<"enter a number:";
//     cin>>number;
//     bool prime=true;
//     while(d!=number)
//     {
//         if(number%d==0)
//         {
//             prime=false;
//             break;
//         }

//         d++;
//     }

//     if (prime)
//     {
//         cout<<"prime number";
//     }
//     else{
//         cout<<"not a prime number";
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int number;
    int d=2;
    cout<<"enter a number: ";
    cin>>number;
    bool isPrime=true;
    while(d!=number)
    {
        if(number%d==0)
        {
            isPrime=false;
            break;
        }

        d++;
    }

    if(isPrime)
    {
        cout<<"prime number";
    }
    else
    {
        cout<<"not a prime number";
    }

    return 0;
}