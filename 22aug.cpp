#include <iostream>
using namespace std;
int main()
{
    int array[10],n,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cin>>y;
    if(y>=n+1)
    {
        cout<<"invalid position"<<endl;
    }

    else{

        for(int i=y-1;i<n-1;i++)
        {
            array[i]=array[i+1];
        }
    }

    n--;
    for(int i=0;i<n;i++)
    {
        cout<<array[i];
    }
    return 0;
}