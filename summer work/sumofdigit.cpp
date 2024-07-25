// // // // // #include <iostream>
// // // // // using namespace std;

// // // // // int main()
// // // // // {
// // // // //     int sum=0;
// // // // //     int number=786;
// // // // //     while(number!=0)
// // // // //     {
// // // // //         int digit = number%10;
// // // // //         number=number/10;

// // // // //         sum+=digit;

        
// // // // //     }

// // // // //     cout<<sum<<endl;
// // // // //     // return 0;

// // // // // }







// // // // #include <iostream>
// // // // using namespace std;

// // // // int main(){
// // // //     int sum=0;
// // // //     int number=789;
// // // //     while(number!=0)
// // // //     {
// // // //         int digit=number%10;
// // // //         number=number/10;
// // // //         sum+=digit;
// // // //     }

// // // //     cout<<sum<<endl;
// // // //     return 0;
// // // // }


// // // #include <iostream>
// // // using namespace std;
// // // int main()

// // // {
// // //     int i, max=0;
// // //     int arr[]={233,456,178,90,789,134};
// // //     for(i=0;i<6;i++)
// // //     {
// // //         if(arr[i]>max);
// // //             max=arr[i];

        
// // //     }

// // // }




// // #include <iostream>
// // using namespace std;
// // int main(){
// //     int i, max=0;
// //     int arr[]={123,456,1789,90,43,56};
// //     for(i=0;i<6;i++)
// //     {
// //         if(arr[i]>max)
// //         max=arr[i];
// //     }

// //     cout<<max<<endl;
// //     return 0;

// // }


// #include <iostream>
// using namespace std;
// int main(){
//     int sum=0;
//     int number=786;
//     while(number!=0)
//     {
//         int digit = number%10;
//         int number=number/10;
//         sum+=digit;

//     }
//     cout<<sum<<endl;
//     return 0;
// }




#include <iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    // cin>>number;
    int sum = 0;
    while(number!=0)
    {
        int digit = number % 10;
        number = number / 10;
        sum+=digit;
    }

    cout<<sum<<endl;
    return 0;
    
}