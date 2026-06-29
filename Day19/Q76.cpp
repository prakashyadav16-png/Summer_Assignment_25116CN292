#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[50][50];
    int main_diag = 0, sec_diag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (i == j) main_diag += mat[i][j];
            if (i + j == n - 1) sec_diag += mat[i][j];
        }
    }
    cout << main_diag << " " << sec_diag << endl;
    return 0;
}