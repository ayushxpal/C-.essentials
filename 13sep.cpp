#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter any character: "<<endl;
    cin>>ch;
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    {
        cout<<ch<<"is an alphabet"<<endl;
    }
    else if(ch>='1' && ch<='9')
    {
        cout<<ch<<" is a number";
    }
    else
    {
        cout<<ch<<" is a special character";
    }

}                                                     
