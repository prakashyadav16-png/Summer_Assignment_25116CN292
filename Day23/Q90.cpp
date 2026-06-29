#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    int freq[256] = {0};
    char ans = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > 0) {
            ans = str[i];
            break;
        }
        freq[(unsigned char)str[i]]++;
    }
    if (ans != '\0') cout << ans << endl;
    else cout << "-1" << endl;
    return 0;
}