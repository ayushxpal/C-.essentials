// // #include <iostream>
// // using namespace std;
// // class A
// // {
// //     public:
// //     void show()
// //     {
// //         cout<<"\nin Base class A";
// //     }
// // };

// // class B:public A
// // {
// //     public:
// //     void show()
// //     {
// //         cout<<"\n in derved class B";
// //     }
// // };
// // int main()
// // {
// //     B obj1;
// //     obj1.show();
// //     return 0;
// // }


// // #include <iostream>
// // using namespace std;
// // class A
// // {
// //     public:
// //     A()
// //     {
// //         cout<<"\nCalling default base class constructor";
// //     }
// //     ~A()
// //     {
// //         cout<<"\n calling the base destructor";
// //     }
// // };

// #include <iostream>
// using namespace std;
// class A
// {
//     int x;
//     public:
//     A(int a)
//     {
//         x=a;
//         cout<<"\nCalling base class parameterised"<<x;

//     }
//     ~A()
//     {
//         cout<<"\nCalling base class destrucor";
//     }
// };

// class public A
// {
//     int l;
//     public:
//     B(int p):A(p)
//     {
//         l=p;
//         cout<<"\nCalling derived class parameterised:"<<d;

//     }
//     ~B()
//     {
//         cout<<"\nCalling derived class destructor";
//     }
// };

// int main()
// {
//     B obj2(1);
//     return 0;
// }
// Output:
// calling base class parameterised 1
// Calling derived class parameterised: 1
// Calling derived class instructor


#include <iostream>
using namespace std;
class A
{
    int x;
    public:
    A()
    {
        cout<<"\nCalling base class default";
    }
    A(int a)
    {
        x=a;
        cout<<"\nCalling base class parameterised"<<x;
    }
    ~A()
    {
        cout<<"\nCalling base class destructor";
    }
};

class B:public A
{
    int l;
    public:
    B()
    {
        cout<<"-"
    }
}