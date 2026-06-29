#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int a[50][50], b[50][50], sum[50][50];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> a[i][j];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> b[i][j];
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}