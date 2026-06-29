#include <iostream>
using namespace std;

int main() {
    int total_seats = 10;
    int choice, seats_req;
    do {
        cout << "Available: " << total_seats << "\n1.Book 2.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> seats_req;
            if (seats_req <= total_seats) {
                total_seats -= seats_req;
                cout << "Booked" << endl;
            } else {
                cout << "Not enough seats" << endl;
            }
        }
    } while (choice != 2);
    return 0;
}