#include <iostream>
#include <string>

using namespace std;

class MovieTicket {
private:
    string movieName;
    string seatNumber;
    double price;
    bool isBooked;

public:
    // Constructor to initialize the ticket details
    MovieTicket(string movie, string seat, double cost) {
        movieName = movie;
        seatNumber = seat;
        price = cost;
        isBooked = false; // Initially, the ticket is not booked
    }

    // Function to book a ticket
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket for '" << movieName << "', Seat " << seatNumber << " has been successfully booked.\n";
        } else {
            cout << "Seat " << seatNumber << " is already booked.\n";
        }
    }

    // Function to cancel a booked ticket
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Booking for '" << movieName << "', Seat " << seatNumber << " has been canceled.\n";
        } else {
            cout << "Seat " << seatNumber << " is not booked yet.\n";
        }
    }

    // Function to display ticket details
    void displayTicketDetails() const {
        cout << "Movie: " << movieName << endl;
        cout << "Seat Number: " << seatNumber << endl;
        cout << "Price: $" << price << endl;
        cout << "Status: " << (isBooked ? "Booked" : "Available") << endl;
        cout << "------------------------------------\n";
    }

    // Destructor to display a message when a ticket object is deleted
    ~MovieTicket() {
        cout << "Ticket object for Seat " << seatNumber << " is being deleted.\n";
    }
};

// Main function to demonstrate ticket booking and cancellation
int main() {
    // Creating multiple ticket objects
    MovieTicket ticket1("Inception", "A1", 10.50);
    MovieTicket ticket2("Inception", "A2", 10.50);
    MovieTicket ticket3("Inception", "A3", 10.50);

    // Display initial ticket details
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    // Booking tickets
    ticket1.bookTicket();
    ticket2.bookTicket();

    // Attempt to book an already booked ticket
    ticket1.bookTicket();

    // Cancel a ticket
    ticket2.cancelTicket();

    // Attempt to cancel a ticket that is not booked
    ticket3.cancelTicket();

    // Display final ticket details
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    return 0;
}
