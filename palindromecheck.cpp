#include <iostream>
using namespace std;
int reverse(int num)
{
    int rev_num=0;
    while(num!=0)
    {
        int digit=num%10;
        num=num/10;
        rev_num=rev_num*10+digit;
    }
    return rev_num;
}
    

    int main()
    {
        int num;
        cout<<"enter a number: ";
        cin>>num;
        int b=reverse(num);
        
        if(num==b)
        {
            cout<<b<<" IS PALINDROME";
        }
        else
        {
            cout<<b<<" IS NOT A PALINDROME";
        }
    }
