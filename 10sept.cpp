#include <iostream>
using namespace std;
inline int remainder(int a, int b)
{
    return a%b;
}
int main()
{
    int a,b;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    cout<<"remainder: "<<remainder(a,b)<<endl;
    return 0;
}