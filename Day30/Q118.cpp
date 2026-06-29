#include <iostream>
using namespace std;

struct MiniBook {
    char title[50];
    char author[50];
};

int main() {
    MiniBook shelf[50];
    int count = 0, choice;
    do {
        cout << "1.Add 2.List 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> shelf[count].title >> shelf[count].author;
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                cout << shelf[i].title << " by " << shelf[i].author << endl;
            }
        }
    } while (choice != 3);
    return 0;
}