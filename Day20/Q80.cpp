#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[50][50];
    int col_sum[50] = {0};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
            col_sum[j] += mat[i][j];
        }
    }
    for (int j = 0; j < c; j++) {
        cout << col_sum[j] << " ";
    }
    cout << endl;
    return 0;
}