// Problem Statement



// Seema is building a ticket reservation system and she wants to reserve tickets and cancel for a particular id. She created two classes: Ticket and Reservation. Each Ticket has a private attribute ticketId, and each Reservation has a private attribute reservedTickets (an array of tickets). The Reservation class contains a friend function cancelReservation(Reservation&, const Ticket&) that allows a ticket to be canceled from a reservation. 



// Implement the classes and the cancelReservation function and write a program to manage ticket reservations.



// Note: This is a sample question asked in Accenture recruitment.

// Input format :
// The first line consists of an integer N, representing the total number of tickets N to be reserved.

// The second line consists of N space-separated integers, representing the ticket IDs.

// The third line consists of an integer, representing the ticket ID for which the reservation has to be cancelled.

// Output format :
// The first line displays the reserved tickets in the format: "Reserved Tickets: <ticketId1> <ticketId2> ... <ticketIdN>"



// The second line displays the cancellation status in the format:

// If the ticket is found and cancelled: "Ticket with ID <ticketId> has been cancelled".
// If the ticket is not found: "Ticket with ID <ticketId> not found in the reservation".


// The third line displays the updated reserved tickets in the format: "Reserved Tickets: <ticketId1> <ticketId2> ... <ticketIdN>".



// Refer to the sample outputs for the formatting specifications.

// Code constraints :
// 1 ≤ N ≤ 25

// Sample test cases :
// Input 1 :
// 5
// 101 103 105 108 110
// 110
// Output 1 :
// Reserved Tickets: 101 103 105 108 110 
// Ticket with ID 110 has been cancelled
// Reserved Tickets: 101 103 105 108 
// Input 2 :
// 5
// 101 103 105 108 110
// 111
// Output 2 :
// Reserved Tickets: 101 103 105 108 110 
// Ticket with ID 111 not found in the reservation
// Reserved Tickets: 101 103 105 108 110 
// Note :
// The program will be evaluated only after the “Submit Code” is clicked.
// Extra spaces and new line characters in the program output will result in the failure of the test case.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Ticket {
private:
    int ticketId;
public:
    Ticket(int id) : ticketId(id) {}
    int getTicketId() const { return ticketId; }
};

class Reservation {
private:
    vector<Ticket> reservedTickets;

    void printReservedTickets() const {
        cout << "Reserved Tickets:";
        for (const Ticket &ticket : reservedTickets) {
            cout << " " << ticket.getTicketId();
        }
        cout << endl;
    }

    friend void cancelReservation(Reservation&, int);

public:
    Reservation(vector<int> ticketIds) {
        for (int id : ticketIds) {
            reservedTickets.push_back(Ticket(id));
        }
    }

    void displayStatusAndCancel(const int &ticketId) {
        printReservedTickets();
        cancelReservation(*this, ticketId);
        printReservedTickets();
    }
};

void cancelReservation(Reservation &res, int ticketID) {
    auto it = find_if(res.reservedTickets.begin(), res.reservedTickets.end(),
        [ticketID](const Ticket &ticket) {
            return ticket.getTicketId() == ticketID;
        });

    if (it != res.reservedTickets.end()) {
        cout << "Ticket with ID " << ticketID << " has been cancelled" << endl;
        res.reservedTickets.erase(it);
    } else {
        cout << "Ticket with ID " << ticketID << " not found in the reservation" << endl;
    }
}

int main() {
    int N;
    cin >> N;
    vector<int> ticketIds(N);
    for (int i = 0; i < N; ++i) {
        cin >> ticketIds[i];
    }
    int cancelId;
    cin >> cancelId;

    Reservation reservation(ticketIds);
    reservation.displayStatusAndCancel(cancelId);

    return 0;
}