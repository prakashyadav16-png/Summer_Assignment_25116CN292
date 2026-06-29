#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    int a[50][50], b[50][50], res[50][50] = {0};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) cin >> a[i][j];
    }
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) cin >> b[i][j];
    }
    if (c1 != r2) return 0;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}