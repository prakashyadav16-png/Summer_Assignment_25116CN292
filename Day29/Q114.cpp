#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice, val;
    do {
        cout << "1.Insert 2.Display 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> val;
            arr[n++] = val;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }
    } while (choice != 3);
    return 0;
}