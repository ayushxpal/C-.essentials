// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// //     int a, b, c;
// //     a=2;
// //     b=7;
// //     c=(a>b)?a:b;
// //     cout<<c;
// //     return 0;

// // }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int value=5;
//     cout<<++value<<value<<++value;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int totalTickets=50;
    int collectedTickets=0;
    int ticketNumber=35;

    while(collectedTickets<totalTickets)
    {
        if(ticketNumber<=0 || ticketNumber>totalTickets)
        {
            cout<<"Invalid Ticket Number"<<endl;
            continue;
        }
        collectedTickets++;
    }
            cout<<"All tickets have been collected"<<endl;

    return 0;
    }
