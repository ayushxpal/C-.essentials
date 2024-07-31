#include <iostream>
using namespace std;
int factorial (int n)
{
    int res=1;
    int i;
    // res=res*i;
    for(i=1;i<=n;i++)
    {
        res=res*i;
    }

    return res;


}

int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"factorial of "<<n<<" is "<<factorial(n);
    return 0;
}