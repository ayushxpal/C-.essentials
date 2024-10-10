// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     char s[30];
//     ofstream fileout;
//     ifstream filein;
//     fileout.open("data",ios::app);
//     fileout<<"hello world";
//     fileout.close();

//     filein.open("data",ios::in);
//     filein.getline(s,30);
//     cout<<s;


// }

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
//     char s[30];
//     ofstream fileout;
//     fstream file;
//     fileout.open("hello", ios::out);
//     fileout<<"hello world";
//     fileout.close();
//     file.open("hello", ios::in | ios::out);
//     cout<<file.tellg();
//     cout<<file.tellp();
//     file.seekp(6);
//     file.seekg(6);
//     cout<<file.tellg();
//     cout<<file.tellp();
//     file>>s;
//     cout<<s;
// }

#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main()
{
    char s[80];
    cout<<"enter a string: ";
    cin>>s;
    int len=strlen(s);
    fstream file;
    file.open("test", ios::in|ios::out);
    for(int i=0;i<len;i++)
    file.put(s[i]);
    file.seekg(0);
    char ch;
    while(file)
    {
        file.get(ch);
        cout<<ch;

    }

    return 0;
