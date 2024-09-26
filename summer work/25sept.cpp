#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int a, int b)
        {
            length=a, breadth=b;
        }
        int area()
        {
            int a=(length*breadth);
            return a;
        }
};

int main()
{
    Rectangle r1(5,6);
    r1.area();
}