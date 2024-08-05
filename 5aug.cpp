#include <iostream>
using namespace std;
void fib(int n)
{
    if (n<=0)
    {
        return;
    }

    if (n==1)
    {
        cout<<1;
        return;
    }

    int a=1, b=1;
    cout<< a <<" " << b <<" ";
    for (int i=3; i<=n; ++i) 
    {
        int next=a+b;
        cout<<next<<" ";
        a=b;
        b=next;
    }
}
    int main()
    {
        int n;
        cout<<"enter a number: ";
        cin>>n;
        fib(n);
        return 0;
    }
