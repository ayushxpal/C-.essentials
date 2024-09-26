// #include <iostream>
// using namespace std;
// class rectangle
// {
//     int l, b;
//     public:
//         rectangle(int x=12, int y=34)
//         {
//             l=x;
//             b=y;
//         }
//         int area()
//         {
//             return l*b;
//         }
// };
// int main()
// {
//     rectangle r;
//     cout<<"Area is: "<<r.area()<<endl;
//     rectangle r1(45,67);
//     cout<<"Area is: "<<r1.area()<<endl;
// } 

#include <iostream>
using namespace std;
class operator
{
    int c;
    public:
    counter(int a)
    {
        c=a;
    }
    counter(counter &ob)
    {
        cout<<"copy constructor invoked";
        c=ob.c;
    }

    void show()
    {
        cout<<c;
    }
};

int main()
{
    counter c1(10);
    counter c2(c1);
    c1.show();
    c2.show();
}