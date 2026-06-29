#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[50][50];
    for (int i = 0; i < r; i++) {
        int r_sum = 0;
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
            r_sum += mat[i][j];
        }
        cout << r_sum << " ";
    }
    cout << endl;
    return 0;
}