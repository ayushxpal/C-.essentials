// // // // #include <iostream>
// // // // using namespace std;
// // // // inline int Max(int x, int y)
// // // // {
// // // //     return (x>y)?x:y;
// // // // }

// // // // int main()
// // // // {
// // // //     cout<<"Max(20,10):"<<Max(20,10)<<endl;
// // // //     cout<<"Max(0,200):"<<Max(0,200)<<endl;
// // // //     cout<<"Max(100,1010):"<<Max(100,1010)<<endl;
// // // //     return 0;
// // // // }

// // // #include <iostream>
// // // using namespacestd;

// // // inline int max(int x, int y)
// // // {
// // //     return (x>y)?x:y;
// // // }


// // #include <iostream>
// // using namespace std;

// // class operation
// // {
// //     int a,b,add;
// //     pusblic:
// //     void get()
// //     {
// //         cout<<"Enter first value:";
// //         cin>>a;
// //         cout<<"Enter second value:";
// //         cin>>b;
// //     }

// //     void sum();
// // }s;

// // inline void operation :: sum()
// // {
// //     add=a+b;
// //     cout<<"Addition of two numbers: "<<a+b;
// // }

// // int main()
// // {
// //     cout<<"Program using inline function\n";
// //     s.get();
// //     s.sum();
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// #include <iomanip>

//  int main(void)
// {
//     int p;

//     cout<<"Enter a decimal number:"<<endl;
//     cin>>p;
//     cout<<p<<"in hexadecimal is: "
//     <<hex<<p<<'\n'
//     <<dec<<p<<"in octal is: "
//     <<oct<<p<<'\n';
//     <<setw(4)<<setfill('0')<<p<<"in decimal is: "   
//     <<dec<<p<<'\n';
//     return 0;
// }



#include <iostream>
using namespace std;
#include <iomanip>

class item
{    static in count;

    int number;

    public:
    void getdata(int a)
    {
        number=a;
        count++;
    }

    void getcount()
    {
        cout<<"Count: ";
        cout<<count<<endl;
    }

    int item::count;

};

    int main()
    {
        item a, b,c;
}