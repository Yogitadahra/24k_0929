#include <iostream>
using namespace std;

class Ticket {
protected:
    int ticketID;
    string passengerName;
    double price;
    string date, destination;

public:
    Ticket(int id, string name, double p, string d, string dest) : ticketID(id), passengerName(name), price(p), date(d), destination(dest) {}
    virtual void reserve() {
      cout << "Ticket reserved for " << passengerName << endl; 
   }
    virtual void cancel() { 
      cout << "Ticket cancelled for " << passengerName << endl; 
   }
    virtual void displayTicketInfo() {
        cout << "Ticket ID: " << ticketID << " | Passenger: " << passengerName << " | Price: $" << price << " | Date: " << date << " | Destination: " << destination << endl;
    }
};

class FlightTicket : public Ticket {
    string airlineName;
    int flightNumber;
    string seatClass;
public:
    FlightTicket(int id, string name, double p, string d, string dest, string airline, int fNum, string sClass)
        : Ticket(id, name, p, d, dest), airlineName(airline), flightNumber(fNum), seatClass(sClass) {}
    void displayTicketInfo() {
        cout << "Flight Ticket - Airline: " << airlineName << " | Flight No: " << flightNumber << " | Seat Class: " << seatClass << endl;
    }
};

class TrainTicket : public Ticket {
    int trainNumber;
    string coachType;
    string departureTime;
public:
    TrainTicket(int id, string name, double p, string d, string dest, int tNum, string cType, string depTime)
        : Ticket(id, name, p, d, dest), trainNumber(tNum), coachType(cType), departureTime(depTime) {}
    void reserve() {
        cout << "Train Ticket Reserved. Auto-assigning seat..." << endl;
    }
};

class BusTicket : public Ticket {
    string busCompany;
    int seatNumber;
public:
    BusTicket(int id, string name, double p, string d, string dest, string company, int sNum)
        : Ticket(id, name, p, d, dest), busCompany(company), seatNumber(sNum) {}
    void cancel() {
        cout << "Bus Ticket Cancelled. Last-minute refund granted." << endl;
    }
};

class ConcertTicket : public Ticket {
    string artistName;
    string venue;
    string seatType;
public:
    ConcertTicket(int id, string name, double p, string d, string dest, string artist, string v, string sType)
        : Ticket(id, name, p, d, dest), artistName(artist), venue(v), seatType(sType) {}
    void displayTicketInfo() {
        cout << "Concert Ticket - Artist: " << artistName << " | Venue: " << venue << " | Seat Type: " << seatType << endl;
    }
};

int main() {
    FlightTicket flight(1, "ALI", 250.0, "2025-04-10", "karachi", "Delta", 567, "Economy");
    TrainTicket train(2, "HAMZA", 60.0, "2025-04-12", "lahore", 789, "Sleeper", "10:00 ");
    BusTicket bus(3, "TALHA", 30.0, "2025-04-15", "aligarh", "Greyhound", 45);
    ConcertTicket concert(4, "AASHIR", 100.0, "2025-04-20", "lucknow", "Coldplay", "Madison Square Garden", "VIP");

    flight.displayTicketInfo();
    train.reserve();
    bus.cancel();
    concert.displayTicketInfo();

    return 0;
}
