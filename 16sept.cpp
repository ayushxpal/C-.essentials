#include <iostream>
using namespace std;
class Rectangle
{
    public:
    int length, breadth;
    void getinput()
    {
        cout<<"Enter the length and breadth of the rectangle: ";
        cin>>length>>breadth;
    }

    void area()
    {
        cout<<"Area of the rectangle is: "<<length*breadth<<endl;
    }

    void perimeter()
    {
        cout<<"Perimeter of the rectangle is: "<<2*(length+breadth)<<endl;
    }
    
};

int main()
{
    Rectangle r;
    r.getinput();
    r.area();
    r.perimeter();
    return 0;
}