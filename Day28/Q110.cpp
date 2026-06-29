#include <iostream>
using namespace std;

struct Account {
    int accNum;
    char holder[50];
    double bal;
};

int main() {
    Account acc;
    cin >> acc.accNum >> acc.holder >> acc.bal;
    int choice;
    double amt;
    do {
        cout << "1.Deposit 2.Withdraw 3.Display 4.Exit: ";
        cin >> choice;
        if (choice == 1) { cin >> amt; acc.bal += amt; }
        else if (choice == 2) { cin >> amt; if (amt <= acc.bal) acc.bal -= amt; }
        else if (choice == 3) { cout << acc.holder << " " << acc.bal << endl; }
    } while (choice != 4);
    return 0;
}