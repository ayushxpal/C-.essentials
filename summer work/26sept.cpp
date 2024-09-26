// // // // #include <iostream>
// // // // using namespace std;
// // // // class rectangle
// // // // {
// // // //     int l, b;
// // // //     public:
// // // //         rectangle(int x=12, int y=34)
// // // //         {
// // // //             l=x;
// // // //             b=y;
// // // //         }
// // // //         int area()
// // // //         {
// // // //             return l*b;
// // // //         }
// // // // };
// // // // int main()
// // // // {
// // // //     rectangle r;
// // // //     cout<<"Area is: "<<r.area()<<endl;
// // // //     rectangle r1(45,67);
// // // //     cout<<"Area is: "<<r1.area()<<endl;
// // // // } 

// // // #include <iostream>
// // // using namespace std;
// // // class operator
// // // {
// // //     int c;
// // //     public:
// // //     counter(int a)
// // //     {
// // //         c=a;
// // //     }
// // //     counter(counter &ob)
// // //     {
// // //         cout<<"copy constructor invoked";
// // //         c=ob.c;
// // //     }

// // //     void show()
// // //     {
// // //         cout<<c;
// // //     }
// // // };

// // // int main()
// // // {
// // //     counter c1(10);
// // //     counter c2(c1);
// // //     c1.show();
// // //     c2.show();
// // // }

// // #include <iostream>
// // using namespace std;
// // class rectangle
// // {
// //     int l, b;
// //     public:
// //         rectangle(int x=12, int y=34)
// //         {
// //             l=x;
// //             b=y;
// //         }
// //         int area()
// //         {
// //             return l*b;
// //         }
// // };

// #include <iostream>
// #include <conio.h>
// using namespace std;
// class counter
// {
//     int id;
//     public:
//         counter()
//         {
//             id=i;
//             cout<<"constructor of object with id="<<id;
//         }
//         ~counter()
//         {
//             cout<<"destructor of object with id="<<id;
//         }
// };

// int main()
// {
//     counter c1(1);
//     counter c2(2);
//     counter c3(3);
//     cout<<"\n end of main";

// }
        
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream of("result.txt");
    of<<"Hello";
    of.close();
    cout<<"data saved\n";
}