// // // #include <iostream>
// // // using namespace std;
// // // int main()
// // // {
// // //     int number;
// // //     int d=2;
// // //     bool isPrime=true;
// // //     cout<<"enter a number: ";
// // //     cin>>number;
// // //     while(d!=number)
// // //     {
// // //         if(number%d==0)
// // //         {
// // //             isPrime=false;
// // //             break;
// // //         }
// // //         d++;
// // //     }

// // //     if(isPrime)
// // //     {
// // //         cout<<number<<" is a prime number";
// // //     }
// // //     else{
// // //         cout<<number<<" is not a prime number";
// // //     }
// // // }

// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int number;
// //     int rev_number=0;
// //     cout<<"enter a number: ";
// //     cin>>number;
// //     int original_number=number;
// //     while(number!=0)
// //     {
// //         int digit=number%10;
// //         rev_number=rev_number*10+digit;
// //         number=number/10;

// //     }

// //     cout<<rev_number<<" is reverse of "<<original_number;
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// int reverse(int num)
// {
//     int rev_num=0;
//     while(num!=0)
//     {
//         // int rev_num=0;
//         int digit=num%10;
//     rev_num=rev_num*10+digit;
//     num=num/10;
//     }

//     return rev_num;
    
// }

// int main()
// {
//     int num;
//     cout<<"enter any number: ";
//     cin>>num;
//      int b=reverse(num);
//     if(num==b)
//     {
//         cout<<"PAL-IN-DROME";
//     }
//     else
//     {
//         cout<<"not a palindrome";
//     }
// }