#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int f = -2147483648, s = -2147483648;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > f) {
            s = f;
            f = a[i];
        } else if (a[i] > s && a[i] != f) {
            s = a[i];
        }
    }
    
    cout << s;
    return 0;
}