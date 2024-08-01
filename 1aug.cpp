// // #include <iostream>
// // using namespace std;
// // int factorial(int n)
// // {
// //     int res=1;
// //     int i;
// //     for(i=1;i<=n;i++)
// //     {
// //         res=res*i;
// //     }

// //     return res;

// // }

// // int main()
// // {
// //     int n;
// //     cout<<"Enter the number: ";
// //     cin>>n;
// //     cout<<"Factorial of "<<n<<" is: "<<factorial(n);
// //     return 0;
// // }



// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     int og_num=num;
//     int sum=0;
//     while(num!=0)
//     {
//         int digit=num%10;
//         num=num/10;
//         sum+=digit;
//     }
//     cout<<"sum of digits of "<<og_num<<" is "<<sum;
// }


#include <iostream>
using namespace std;
int main()
{
    int num;
    int d=2;
    cout<<"enter a number: ";
    cin>>num;
    bool isPrime=true;
    while(d!=num)
    {
        if(num%d==0)
        {
            isPrime=false;
            break;
        }
        d++;
    }

    if(isPrime)
    {
        cout<<"PRIME NUMBER it is";
    }

    else
    {
        cout<<"NOT A PRIME NUMBER";
    }

    return 0;
}