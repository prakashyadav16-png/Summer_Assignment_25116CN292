#include <iostream>
using namespace std;

struct Student {
    int id;
    char name[50];
    double gpa;
};

int main() {
    int n;
    cin >> n;
    Student record[100];
    for (int i = 0; i < n; i++) {
        cin >> record[i].id >> record[i].name >> record[i].gpa;
    }
    for (int i = 0; i < n; i++) {
        cout << "ID: " << record[i].id << " Name: " << record[i].name << " GPA: " << record[i].gpa << endl;
    }
    return 0;
}