#include <iostream>
using namespace std;

int main() {
    char s1[200], s2[200];
    cin >> s1 >> s2;
    int f1[256] = {0}, f2[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) f1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) f2[(unsigned char)s2[i]]++;
    bool is_ang = true;
    for (int i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            is_ang = false;
            break;
        }
    }
    if (is_ang) cout << "Anagram" << endl;
    else cout << "Not Anagram" << endl;
    return 0;
}