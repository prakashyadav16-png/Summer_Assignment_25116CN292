#include <iostream>
using namespace std;

struct Employee {
    int id;
    char name[50];
    char dept[50];
};

int main() {
    int n;
    cin >> n;
    Employee list[100];
    for (int i = 0; i < n; i++) {
        cin >> list[i].id >> list[i].name >> list[i].dept;
    }
    for (int i = 0; i < n; i++) {
        cout << "ID: " << list[i].id << " Name: " << list[i].name << " Dept: " << list[i].dept << endl;
    }
    return 0;
}