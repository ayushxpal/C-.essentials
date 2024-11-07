#include <iostream>
using namespace std;
class B
{
    protected:
    int x;
    public:
    void get_dataB()
    {
        cout<<"Enter the value of x: ";
        cin>>x;
    }
};

class DB1:public B
{
    protected:
    int y;
    public:
    void get_dataDB1()
    {
        cout<<"Enter the value of y: ";
        cin>>y;
    }
};

class DB2:public B
{
    protected:
    int z;
    public:
    void get_dataDB2()
    {
        cout<<"Enter the value of z: ";
        cin>>z;
    }
};
class D:public DB1,public DB2
{
    int sum;
    public:
    void add()
    {
        sum=x+y+z;
    }
    void display()
    {
        cout<<"The sum of x, y and z is: "<<sum<<endl;
    }
};
int main()
{
    D obj1;
    obj1.get_dataB();
    obj1.get_dataDB1();
    obj1.get_dataDB2();
    obj1.add();
    obj1.display();
    return 0;
}