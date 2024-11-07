#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1=mid - left + 1;
    int n2= right - mid;

    int leftArr[n1],  rightArr[n2];

    for (int i=0; i<n; )
}


int i=0, j=0, k=left;
while(i<ans)

while(i<n1)
{
    arr[k]=leftArr[i];
    i++;
    k++;

}

while(j<n2)
{
    arr[k]=rightArr[j];
    j++;
    k++;
}


void merge
class student
{
    char name[30];
    int roll_no;
    float marks;
public:
    void getdata()
    {
        cout<<"enter name";
        cin>>name;
        cout<<"enter rollno";
        cin>>roll_no;
        cout<<"enter marks";
        cin>>marks;
    }
    void putdata()
    {
        cout<<name;
        cout<<roll_no;
        cout<<marks;

    }
};
int main()
{
  student ob1, ob2;
  ob1.getdata();
  fstream file;
  file.open("data", ios::in|ios::out);
  file.write((char*)&ob1, sizeof(ob1));

  file.seekg(0);
  file.read((char*)&ob2, sizeof(ob2));

  ob2.putdata();

    
}