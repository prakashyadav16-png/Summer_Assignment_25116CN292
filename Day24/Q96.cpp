#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    bool seen[256] = {false};
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = true;
            str[k++] = str[i];
        }
    }
    str[k] = '\0';
    cout << str << endl;
    return 0;
}