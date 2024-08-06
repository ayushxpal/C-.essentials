#include <iostream>
using namespace std;
int main()
{
  int i, max=0;
    int arr[]={12, 14, 16, 88, 19};
    // int i, max=0;
    for(i=0;i<5;i++)
    {
         if(arr[i]>max)
         {
           max=arr[i];
           
         }
         
        //  cout<<max<<endl;
        //  cout<<max;
    }
     cout<<max<<endl;
}
