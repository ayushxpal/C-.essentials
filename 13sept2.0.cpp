#include <iostream>
using namespace std;
int main()
{
    int *ptr;
    {
        int val=23;
        ptr=&val;
        cout<<*ptr<<endl;
        cout<<ptr<<endl;
        

    }
}