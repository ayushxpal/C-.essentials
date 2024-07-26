// // // // // // #include <iostream>
// // // // // // using namespace std;
// // // // // // int main()
// // // // // // {
// // // // // //     int number;
// // // // // //     int d=2;
// // // // // //     bool isPrime=true;
// // // // // //     cout<<"enter a number: ";
// // // // // //     cin>>number;
// // // // // //     while(d!=number)
// // // // // //     {
// // // // // //         if(number%d==0)
// // // // // //         isPrime=false;
// // // // // //         break;
// // // // // //     }

// // // // // //     d++;

// // // // // //     if(isPrime)
// // // // // //     {
// // // // // //         cout<<number<<" is a prime number";
// // // // // //     }

// // // // // //     else
// // // // // //     {
// // // // // //         cout<<number<<" is not a prime number";
// // // // // //     }

// // // // // //     return 0;

// // // // // // }


// // // // // #include <iostream>  // This line is missing in your code, it's necessary for cout to work
// // // // // using namespace std;

// // // // // int main() {
// // // // //     int a = 1223;  // The number to be reversed
// // // // //     int res = 0;   // The variable to store the reversed number

// // // // //     while(a != 0) {  // Loop until all digits of 'a' are processed
// // // // //         int dig = a % 10;  // Get the last digit of 'a' (1223 % 10 = 3)
// // // // //         res = res * 10 + dig;  // Add the digit to 'res' (res = 0 * 10 + 3 = 3)
// // // // //         a = a / 10;  // Remove the last digit from 'a' (1223 / 10 = 122)
// // // // //     }

// // // // //     cout << res;  // Print the reversed number (3231)
// // // // //     return 0;
// // // // // }


// // // // #include <iostream>
// // // // using namespace std;
// // // // int main()
// // // // {
// // // //     int number;
// // // //     int rev_number=0;
// // // //     cout<<"enter a number: ";
// // // //     cin>>number;
// // // //     int original_number=number;
// // // //     while(number!=0)
// // // //     {
// // // //         int dig=number%10;
// // // //         rev_number=rev_number*10+dig;
// // // //         number=number/10;
// // // //     }

// // // //     cout<<rev_number<<" is reverse of "<<original_number;
// // // //     return 0;
// // // // }


// // // #include <iostream> //this is used to input any type of value and giving output
// // // using namespace std; //this allows us to use the properties of giving and taking output
// // // int main()  //this is mandatory function which should be in every code you use
// // // {
// // //     int number; //initialisation of a variable (number in this case)
// // //     int rev_number; //initialising a variable to store value of the number to be reversed
// // //     cout<<"enter a number: ";  //taking output
// // //     cin>>number; //giving input
// // //     int original_number=number; //initialising original number to the number which we will give as input
    
// // //     while(number!=0) //giving conditions through while loop till number doesn't equal to zero;
// // //     {
// // //         int digit=number%10; //this will destroy all the numbers excluding the last digit from your number
// // //         rev_number=rev_number*10+digit; //this will rverse your number 
// // //         number=number/10; //this will remove the last digit of your number as the number will reversed

// // //     }

// // //     cout<<rev_number<<" is reverse of "<<original_number;
// // //     return 0;
// // // }


// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int number;
// //     int sum=0;
// //     cout<<"enter any number: ";
// //     cin>>number;
// //     while(number!=0)
// //     {
// //         int digit=number%10;
// //         number=number/10;
// //         sum+=digit;
// //     }

// //     cout<<"sum of digit is: "<<sum;
// // }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int number;
//     int d=2;
//     cout<<"enter any number: ";
//     cin>>number;
//     bool isPrime=true;
//         if(number%d==0)
//         {
//             isPrime=false;
//             break;
//         }
//         d++;
//         if(isPrime)
//         {
//             cout<<number<<" is prime number";
//         }
//         else
//         {
//             cout<<number<<" is not a prime number";
//         }
//     }

#include <iostream>
using namespace std;
int main()
{
    int number;
    int d=2;
    bool isPrime=true;
    // int original
    cout<<"enter a number: ";
    cin>>number;
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
        cout<<number<<" is a prime number";
    }
    else
    {
        cout<<number<<" is not a prime number";
    }
}