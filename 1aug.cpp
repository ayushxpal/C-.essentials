#include <iostream>
using namespace std;
int factorial(int n)
{
    int res=1;
    int i;
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }

    return res;

}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial of "<<n<<" is: "<<factorial(n);
    return 0;
}