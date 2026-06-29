#include <iostream>
using namespace std;

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    int n = 0, choice;
    Contact directory[100];
    do {
        cout << "1.Add 2.Display 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> directory[n].name >> directory[n].phone;
            n++;
        } else if (choice == 2) {
            for (int i = 0; i < n; i++) {
                cout << directory[i].name << " " << directory[i].phone << endl;
            }
        }
    } while (choice != 3);
    return 0;
}