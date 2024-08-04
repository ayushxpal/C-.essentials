// #include <iostream>
// #include <cmath>
// using namespace std;
// int convertBinarytoDecimal(int n) {
//     int decimalNumber=0, i=0, dig;
//     while(n!=0)
//     {
//         dig=n%10;
//         n=n/10;
//         decimalNumber+=dig*pow(2,i);
//         ++i;
//     }

//     return decimalNumber;

// }

// int main()
// {
//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
//     cout<<"Decimal of binary "<<n<<" is "<<convertBinarytoDecimal(n);
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int convertBinarytoDecimal(int n)
{
    decimalnumber=0; i=0; dig;
    while(n!=0)
    {
        dig=n%10;
        n=n/10;
        decimalnumber+=dig*pow(2,i);
        ++i;

    }
    return decimalnumber;
}

int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"Decimal of binary "<<n<<" is "<<convertBinarytoDecimal(n);
    return 0;
}