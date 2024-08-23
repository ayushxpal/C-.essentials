#include <iostream>
using namespace std;
class Circle
{
    private:
    double radius;

    public:
    void compute_area(double r)
    {
        radius = r;
        double area=3.14*radius*radius;
        cout<<"radius of circle:"<<radius<<endl;
        cout<<"Area of circle: "<<area<<endl;
    }
};

    int main()
    {
        Circle obj;
        // obj.radius=5.5;

        obj.compute_area(1.5);
        return 0;
    }