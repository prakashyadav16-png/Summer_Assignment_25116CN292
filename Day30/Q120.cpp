#include <iostream>
using namespace std;

void add_item(char items[][50], int prices[], int &count) {
    cin >> items[count] >> prices[count];
    count++;
}

void print_invoice(char items[][50], int prices[], int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        cout << items[i] << " : " << prices[i] << endl;
        total += prices[i];
    }
    cout << "Grand Total: " << total << endl;
}

int main() {
    char menu_items[50][50];
    int prices[50];
    int total_items = 0, choice;
    do {
        cout << "1.Add Product 2.Generate Bill 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            add_item(menu_items, prices, total_items);
        } else if (choice == 2) {
            print_invoice(menu_items, prices, total_items);
        }
    } while (choice != 3);
    return 0;
}