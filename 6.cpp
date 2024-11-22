#include <iostream>
#include <string>
using namespace std;

class Flight {
private:
    int flight_no;
    string source;
    string destination;
    double fare;

public:
   
    Flight(int f_no, string src, string dest, double f) {
        this->flight_no = f_no;
        this->source = src;
        this->destination = dest;
        this->fare = f;
    }

   
    void displayInfo() const {
        cout << "Flight Information:" << endl;
        cout << "Flight Number: " << this->flight_no << endl;
        cout << "Source: " << this->source << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Fare: $" << this->fare << endl;
        cout << endl;
    }
};

int main() {
    
    int flight_no;
    string source, destination;
    double fare;

    cout << "Enter flight number: ";
    cin >> flight_no;
    cin.ignore(); 

    cout << "Enter source: ";
    getline(cin, source);

    cout << "Enter destination: ";
    getline(cin, destination);

    cout << "Enter fare: ";
    cin >> fare;
 
    Flight flight(flight_no, source, destination, fare);

    flight.displayInfo();

    return 0;
}
