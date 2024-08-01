// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     int res=1;
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         res=res*i;
//     }

//     return res;

// }

// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<"Factorial of "<<n<<" is: "<<factorial(n);
//     return 0;
// }



#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int og_num=num;
    int sum=0;
    while(num!=0)
    {
        int digit=num%10;
        num=num/10;
        sum+=digit;
    }
    cout<<"sum of digits of "<<og_num<<" is "<<sum;
}