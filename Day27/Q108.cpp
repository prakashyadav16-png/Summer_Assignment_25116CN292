#include <iostream>
using namespace std;

int main() {
    char name[50];
    int m1, m2, m3;
    cin >> name >> m1 >> m2 >> m3;
    int total = m1 + m2 + m3;
    double avg = total / 3.0;
    cout << "Name: " << name << endl;
    cout << "Total: " << total << " Average: " << avg << endl;
    if (avg >= 40) cout << "Result: Pass" << endl;
    else cout << "Result: Fail" << endl;
    return 0;
}