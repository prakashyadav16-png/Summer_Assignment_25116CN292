#include <iostream>
using namespace std;

int main() {
    char str[500], res[500];
    cin.getline(str, 500);
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            res[k++] = str[i];
        }
    }
    res[k] = '\0';
    cout << res << endl;
    return 0;
}