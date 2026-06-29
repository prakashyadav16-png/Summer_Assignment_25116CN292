#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char names[50][50];
    int rolls[50];
    for (int i = 0; i < n; i++) {
        cin >> rolls[i] >> names[i];
    }
    for (int i = 0; i < n; i++) {
        cout << rolls[i] << " - " << names[i] << endl;
    }
    return 0;
}