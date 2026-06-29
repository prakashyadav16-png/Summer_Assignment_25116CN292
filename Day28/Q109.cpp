#include <iostream>
using namespace std;

struct Book {
    int id;
    char title[50];
    bool is_issued;
};

int main() {
    int n;
    cin >> n;
    Book lib[100];
    for (int i = 0; i < n; i++) {
        cin >> lib[i].id >> lib[i].title;
        lib[i].is_issued = false;
    }
    int choice, search_id;
    do {
        cout << "1.Issue 2.Return 3.Exit: ";
        cin >> choice;
        if (choice == 1 || choice == 2) {
            cin >> search_id;
            for (int i = 0; i < n; i++) {
                if (lib[i].id == search_id) {
                    lib[i].is_issued = (choice == 1);
                    break;
                }
            }
        }
    } while (choice != 3);
    return 0;
}