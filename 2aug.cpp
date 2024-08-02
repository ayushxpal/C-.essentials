#include <iostream>
using namespace std;
int sumofcubes(int n)
{
    int res=0;
    while(n!=0)
    {
        int digit=n%10;
        res=res+(digit*digit*digit);
        n=n/10;
    }
    return res;
}
    // return res;

    int main()
    {
        int n;
        cout<<"enter a number: ";
        cin>>n;
        if(n==sumofcubes(n))
        {
            cout<<"armstrong";
        }
        else{
            cout<<"not an armstrong (u jerkk)";
        }
        return 0;
    }
