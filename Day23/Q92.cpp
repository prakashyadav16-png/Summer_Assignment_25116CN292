#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    int freq[256] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }
    char max_char = str[0];
    int max_val = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_val) {
            max_val = freq[i];
            max_char = (char)i;
        }
    }
    cout << max_char << endl;
    return 0;
}