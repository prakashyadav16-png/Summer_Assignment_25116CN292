#include <iostream>
using namespace std;

int main() {
    int n, m, a[50], b[50];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    }
    
    return 0;
}