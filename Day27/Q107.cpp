#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    double base[100], allowance[100], total[100];
    for (int i = 0; i < n; i++) {
        cin >> base[i] >> allowance[i];
        total[i] = base[i] + allowance[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "Emp " << i + 1 << " Total Salary: " << total[i] << endl;
    }
    return 0;
}