// Ticket Booking System
#include <iostream>
#include <string>
using namespace std;
int main() {
    string passengerName;
    int seatNumber;
    int choice;

    cout << "1. Book Ticket\n";
    cout << "2. View Ticket\n";
    cout << "Enter Choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Seat Number: ";
        cin >> seatNumber;

        cout << "\nTicket Booked Successfully!";
    }
    else if (choice == 2) {
        cout << "Enter Passenger Name: ";
        getline(cin, passengerName);

        cout << "Enter Seat Number: ";
        cin >> seatNumber;

        cout << "\nPassenger Name: " << passengerName;
        cout << "\nSeat Number: " << seatNumber;
    }
    else {
        cout << "Invalid Choice";
    }

    return 0;
}