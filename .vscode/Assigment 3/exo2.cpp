#include <iostream>
#include <string>

using namespace std;

class MovieTicket_584 {
private:
    string movieName_584;
    string seatNumber_584;
    double price_584;
    bool isBooked_584;

public:
   
    MovieTicket_584(string movie_584, string seat_584, double cost_584) {
        movieName_584 = movie_584;
        seatNumber_584 = seat_584;
        price_584 = cost_584;
        isBooked_584 = false; 
    }

   
    void bookTicket_584() {
        if (!isBooked_584) {
            isBooked_584 = true;
            cout << "Ticket for '" << movieName_584 << "', Seat " << seatNumber_584 << " has been successfully booked.\n";
        } else {
            cout << "Seat " << seatNumber_584 << " is already booked.\n";
        }
    }

    
    void cancelTicket_584() {
        if (isBooked_584) {
            isBooked_584 = false;
            cout << "Booking for '" << movieName_584 << "', Seat " << seatNumber_584 << " has been canceled.\n";
        } else {
            cout << "Seat " << seatNumber_584 << " is not booked yet.\n";
        }
    }

   
    void displayTicketDetails_584() const {
        cout << "Movie: " << movieName_584 << endl;
        cout << "Seat Number: " << seatNumber_584 << endl;
        cout << "Price: $" << price_584 << endl;
        cout << "Status: " << (isBooked_584 ? "Booked" : "Available") << endl;
        cout << "------------------------------------\n";
    }

    
    ~MovieTicket_584() {
        cout << "Ticket object for Seat " << seatNumber_584 << " is being deleted.\n";
    }
};


int main() {

    MovieTicket_584 ticket1_584("Inception", "A1", 10.50);
    MovieTicket_584 ticket2_584("Inception", "A2", 10.50);
    MovieTicket_584 ticket3_584("Inception", "A3", 10.50);

    // Display initial ticket details
    ticket1_584.displayTicketDetails_584();
    ticket2_584.displayTicketDetails_584();
    ticket3_584.displayTicketDetails_584();


    ticket1_584.bookTicket_584();
    ticket2_584.bookTicket_584();

   
    ticket1_584.bookTicket_584();

    
    ticket2_584.cancelTicket_584();

   
    ticket3_584.cancelTicket_584();

    
    ticket1_584.displayTicketDetails_584();
    ticket2_584.displayTicketDetails_584();
    ticket3_584.displayTicketDetails_584();

    return 0;
}
