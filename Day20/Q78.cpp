#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mat[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> mat[i][j];
    }
    bool sym = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                sym = false;
                break;
            }
        }
    }
    if (sym) cout << "Symmetric" << endl;
    else cout << "Not Symmetric" << endl;
    return 0;
}