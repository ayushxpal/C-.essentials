#include <iostream>
using namespace std;
int sumofcube(int n)
{
    int res=0;
    while(n!=0)
    {
        int digit=n%10;
        res=res+(digit*digit*digit);
        n/=10;
    }
    return res;
}
    int main()
    {
        int n;
        cout<<"enter a number: ";
        cin>>n;
        if(n==sumofcube(n))
        {
            cout<<"armstrong";
        }

        else{
            cout<<"not an armstrong";
        }

        return 0;

    }
