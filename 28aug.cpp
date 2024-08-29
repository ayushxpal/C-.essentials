// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //    enum days{sun, mon, tues, wed, thur, fri, sat};
// //    days day1, day2;
// //    day1=sun;
// //    day2=fri;
// //    cout<<day1<<endl;
// //    cout<<day2<<endl;

// //    if(day1>day2)
// //    {
// //     cout<<"day 1 comes after day 2";
// //    } 
// //    else
// //    {
// //     cout<<"day 1 comes before day 2";
// //    }
// // }



// #include <iostream>
// using namespace std;

// enum week{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};

// int main()
// {
//     week today;
//     today=Wednesday;
//     cout<<"Day"<<today+1;
//     return 0;
// }


#include <iostream>
using namespace std;

enum seasons{spring=34, summer=4, autumn=9, winter=32};

int main()
{
    seasons s;

    s=summer;
    cout<<"summer="<<s<<endl;
    return 0;
}