#include <iostream>
using namespace std;

int main() {
    char s1[200], s2[200];
    cin >> s1 >> s2;
    int f1[256] = {0}, f2[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) f1[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) f2[(unsigned char)s2[i]]++;
    for (int i = 0; i < 256; i++) {
        if (f1[i] > 0 && f2[i] > 0) {
            int min_count = (f1[i] < f2[i]) ? f1[i] : f2[i];
            for (int c = 0; c < min_count; c++) cout << (char)i;
        }
    }
    cout << endl;
    return 0;
}