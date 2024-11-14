#include <iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x==1) throw x;
        else if(x==0) throw 'x';
        else if (x==-1) throw 1.0;
        cout<<"End of try block";
    }

    catch(char c)
    {
        cout<<"caught a character";}
    catch(int m)
    {
        cout<<"caught an integer";}
    catch(double)
    {
        cout<<"caught an integer";}
    catch(double d)
    {
        cout<<"caught a double";}
        cout<<"end of try catch system";
    }


    int main()
    {
        cout<<"testing multiple catches";
        cout<<"x==1";
        Test(1);
        cout<<"x==0";
        Test(0);
        cout<<"x==-1";
        Test(-1);
        cout<<"x==2";
        Test(2);
        return 0;
    } 