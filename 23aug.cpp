#include <iostream>
using namespace std;
struct employee
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    employee e;
    cout << "Enter Full name: ";
    cin>>e.name[50];
    cout << "Enter age: ";
    cin >> e.age;
    cout << "Enter salary: ";
    cin >> e.salary;
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << e.name << endl;
    cout << "Age: " << e.age << endl;
    cout << "Salary: " << e.salary;
    return 0;
}