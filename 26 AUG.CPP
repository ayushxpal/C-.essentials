// #include <iostream>
// using namespace std;

// // Enum for the cardinal directions
// enum Direction {
//     North = 1,
//     East,
//     West,
//     South
// };

// class Navigator {
// public:
//     void getDirection(int direction) {
//         switch (direction) {
//             case North:
//                 cout << "We are headed towards North." << endl;
//                 break;
//             case East:
//                 cout << "We are headed towards East." << endl;
//                 break;
//             case West:
//                 cout << "We are headed towards West." << endl;
//                 break;
//             case South:
//                 cout << "We are headed towards South." << endl;
//                 break;
//             default:
//                 cout << "Invalid Input" << endl;
//         }
//     }
// };

// int main() {
//     Navigator navigator;
//     int input;

//     // Get the direction input
//     cin >> input;

//     // Get the corresponding direction output
//     navigator.getDirection(input);

//     return 0;
// }


#include <iostream>
using namespacestd;

enum Direction
{
    North=1,
    East,
    West,
    South,
};

class Navigator
{
    public:
    void getDirection(int Direction)
    {
        switch (Direction)
        {
            
            case North:
            cout<<"We are headed towards North."<<endl;
            break;

            case East:
            cout<<"We are headed towards East."<<endl;

            case West;
            cout<<"We are headed towards North."<<endl;

            case South;
            cout<<"We are headed towards South."<<endl;
            break;

            default:
            cout<<"Invalid Input"<<endl;



        }
    }
};

int main()
{
    Naigator navigator;
    int input;
    cin>>input;
    navigator.getDirection(input);
    return 0;
}