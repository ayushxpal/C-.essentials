// #include <iostream>
// using namespace std;
// int main(){
//     int i;
//     for(i=1;i<6;i++)
//     cout<<i<<endl;
//     return 0;

// }

// ouestion 2


// #include <iostream>
// using namespace std;
// int main(){
//     int i, sum=0;
//     for(i=1;i<=10;++i)
//     sum=sum+i;
//     cout<<" sum of first 10 natural numbers are: "<<sum<<endl;
// }


// question 3

// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int b=10;
//     int result=a*b;
//     cout<<"result: "<<result<<endl;
//     return 0;


// }

// Question 3

// #include <iostream>
// using namespace std;
// int main(){
//     int i,n,sum=0; //it is necessary to assign sum=0 so that the system doesnt use the garbage value
//     cin>>n;
//     for(i=1;i<=n;i++)
//     sum=sum+i;
//     cout<<"the sum of n numbers are: "<<sum;
// }

#include <iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cin>>n;
    for(i=1;i<=n;i++)
    // cin>>n;
    sum=sum+i;
    cout<<"sum of n numbers are: "<<sum;

}