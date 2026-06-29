#include <iostream>
using namespace std;

int main() {
    char s[100];
    int choice;
    do {
        cout << "1.Input 2.Length 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> s;
        } else if (choice == 2) {
            int len = 0;
            while (s[len] != '\0') len++;
            cout << "Length: " << len << endl;
        }
    } while (choice != 3);
    return 0;
}