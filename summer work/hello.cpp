#include <iostream>
using namespace std;
int main() {
    int age;
    cout << "enter your age"<<endl ;
    cin >> age;
    if(age>18){
        cout<<"allow access"<<endl;

    }
    else{
        cout<<"access denied [underage hai bsdk tu!]"<<endl;
    }
    return 0;
}