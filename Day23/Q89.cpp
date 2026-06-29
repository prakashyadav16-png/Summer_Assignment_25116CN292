#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    char ans = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            ans = str[i];
            break;
        }
    }
    if (ans != '\0') cout << ans << endl;
    else cout << "-1" << endl;
    return 0;
}