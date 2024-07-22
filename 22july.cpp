// // // #include <iostream>
// // // using namespace std;
// // // int main(){
// // //     int number;
// // //     int d=2;
// // //     cout<<"enter a number:";
// // //     cin>>number;
// // //     bool prime=true;
// // //     while(d!=number)
// // //     {
// // //         if(number%d==0)
// // //         {
// // //             prime=false;
// // //             break;
// // //         }

// // //         d++;
// // //     }

// // //     if (prime)
// // //     {
// // //         cout<<"prime number";
// // //     }
// // //     else{
// // //         cout<<"not a prime number";
// // //     }
// // // }

// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int number;
// //     int d=2;
// //     cout<<"enter a number: ";
// //     cin>>number;
// //     bool isPrime=true;
// //     while(d!=number)
// //     {
// //         if(number%d==0)
// //         {
// //             isPrime=false;
// //             break;
// //         }

// //         d++;
// //     }

// //     if(isPrime)
// //     {
// //         cout<<"prime number";
// //     }
// //     else
// //     {
// //         cout<<"not a prime number";
// //     }

// //     return 0;
// // }


// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={122,123,4,4,123};
//     int i, max=0;
//     for(i=0;i<5;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//             // cout<<"greatest number from the array is:"<<max<<endl;
//         }
//         // cout<<"greatest number from the array is:"<<max<<endl;
//     }

//     cout<<"greatest number from the array is:"<<max<<endl;
// }

#include <iostream>
using namespace std;
int main(){
    int number;
    int d=2;
    cout<<"enter any number: ";
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