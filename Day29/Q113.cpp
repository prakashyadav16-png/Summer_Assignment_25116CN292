#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;
    do {
        cout << "1.Add 2.Sub 3.Mul 4.Div 5.Exit: ";
        cin >> choice;
        if (choice >= 1 && choice <= 4) {
            cin >> a >> b;
            if (choice == 1) cout << a + b << endl;
            else if (choice == 2) cout << a - b << endl;
            else if (choice == 3) cout << a * b << endl;
            else if (choice == 4) {
                if (b != 0) cout << a / b << endl;
                else cout << "Error" << endl;
            }
        }
    } while (choice != 5);
    return 0;
}