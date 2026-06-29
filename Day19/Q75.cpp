#include <iostream>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int mat[50][50];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> mat[i][j];
    }
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}