#include <iostream>
using namespace std;

struct Item {
    int id;
    int qty;
};

int main() {
    Item inv[100];
    int count = 0, choice;
    do {
        cout << "1.Add Item 2.Update Qty 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> inv[count].id >> inv[count].qty;
            count++;
        } else if (choice == 2) {
            int sid, nqty;
            cin >> sid >> nqty;
            for (int i = 0; i < count; i++) {
                if (inv[i].id == sid) {
                    inv[i].qty = nqty;
                    break;
                }
            }
        }
    } while (choice != 3);
    return 0;
}