// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     cout<<"enter a number: ";
//     cin>>number;
//     int b=2;
//     bool isPrime=true;
//     while(b!=number)
//     {
//         if(number%b==0)
//         {
//             isPrime=false;
//             break;
//         }
//         b++;
//     }

//     if(isPrime)
//     {
//         cout<<"Prime number";
//     }
//     else{
//         cout<<"Not a prime number";
//     }
// }







#include <iostream>
using namespace std;
int main()
{
    int number;
    int d=2;
    cout<<"enter any number: ";
    cin>>number;
    bool isPrime=true;
    while(number!=0)
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
            cout<<"Prime number";
        }

        else
        {
            cout<<"not a Prime number";
        }

        return 0;


    
}
