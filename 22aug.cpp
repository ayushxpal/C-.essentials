#include <iostream>
using namespace std;

class circle
{
    public:
    double radius;
    double compute_area()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    circle object;
    object.radius=5.5;
    cout<<"Radius is: "<<object.radius<<endl;
    cout<<"area is: "<<object.compute_area();
    return 0;
}