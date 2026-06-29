#include <iostream>
using namespace std;

int main() {
    int n, a[100], b[100], k = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            b[k++] = a[i];
        }
    }
    
    while (k < n) {
        b[k++] = 0;
    }
    
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    
    return 0;
}