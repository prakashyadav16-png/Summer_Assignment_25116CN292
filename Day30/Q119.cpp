#include <iostream>
using namespace std;

struct MiniEmp {
    int id;
    double sal;
};

int main() {
    MiniEmp emps[50];
    int count = 0, choice;
    do {
        cout << "1.Add 2.Show High Salary 3.Exit: ";
        cin >> choice;
        if (choice == 1) {
            cin >> emps[count].id >> emps[count].sal;
            count++;
        } else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                if (emps[i].sal > 50000) {
                    cout << emps[i].id << " (" << emps[i].sal << ")" << endl;
                }
            }
        }
    } while (choice != 3);
    return 0;
}