// // // // #include <iostream>
// // // // using namespace std;
// // // // int sumofcubes(int n)
// // // // {
// // // //     int res=0;
// // // //     while(n!=0)
// // // //     {
// // // //         int digit=n%10;
// // // //         res=res+(digit*digit*digit);
// // // //         n=n/10;
// // // //     }
// // // //     return res;
// // // // }
// // // //     // return res;

// // // //     int main()
// // // //     {
// // // //         int n;
// // // //         cout<<"enter a number: ";
// // // //         cin>>n;
// // // //         if(n==sumofcubes(n))
// // // //         {
// // // //             cout<<"armstrong";
// // // //         }
// // // //         else{
// // // //             cout<<"not an armstrong (u jerkk)";
// // // //         }
// // // //         return 0;
// // // //     }


// // // #include <iostream>
// // // using namespace std;
// // // int sumofcubes(int n)
// // // {
// // //     int res=0;
// // //     while(n!=0)
// // //     {
// // //         int digit=n%10;
// // //         res=res+(digit*digit*digit);
// // //         n=n/10;
// // //     }
// // //     return res;

// // // }

// // // int main()
// // // {
// // //     int n;
// // //     cout<<"enter any number: ";
// // //     cin>>n;
// // //     if(n==sumofcubes(n))
// // //     {
// // //         cout<<"arm is strong";
// // //     }
// // //     else{
// // //         cout<<"arm is weak";
// // //     }
// // // }

// // #include <iostream>
// // using namespace std;
// // int sumofcubes(int n)
// // {
// //     int res=0;
// //     while(n!=0)
// //     {
// //         int digit=n%10;
// //         res=res+(digit*digit*digit);
// //         n=n/10;
        
        
// //     }
// //     return res;

// // }

// // int main()
// // {
// //     int n;
// //     cout<<"enter a number: ";
// //     cin>>n;
// //     if(n==sumofcubes(n))
// //     {
// //         cout<<"armstrong";
// //     }
// //     else
// //     {
// //         cout<<"not an armstrong";
// //     }

// //     return 0;

// // }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[10], n, i;
//     cout<<"enter any number: ";
//     cin>>n;
//     for(i=0; n>0; i++)
//     {
//         a[i]=n%2;
//         n=n/2;
//     }

//     cout<<"binary of the given number is: ";
//     for(i=i-1; i>=0; i--)
//     {
//         cout<<a[i];
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
int main()
{
    int a[10], n, i;
    cout<<"enter any number: ";
    cin>>n;
    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }

    cout<<"binary of the given number is: ";
    for(i=i-1; i>=0; i--)
    {
        cout<<a[i];
    }       

    return 0;

}