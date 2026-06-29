#include <iostream>
using namespace std;

int main() {
    char s1[200], s2[200];
    cin >> s1 >> s2;
    int l1 = 0, l2 = 0;
    while (s1[l1] != '\0') l1++;
    while (s2[l2] != '\0') l2++;
    if (l1 != l2) {
        cout << "No" << endl;
        return 0;
    }
    char temp[400];
    int k = 0;
    for (int i = 0; i < l1; i++) temp[k++] = s1[i];
    for (int i = 0; i < l1; i++) temp[k++] = s1[i];
    temp[k] = '\0';
    
    bool match = false;
    for (int i = 0; i <= k - l2; i++) {
        int j;
        for (j = 0; j < l2; j++) {
            if (temp[i + j] != s2[j]) break;
        }
        if (j == l2) {
            match = true;
            break;
        }
    }
    if (match) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}