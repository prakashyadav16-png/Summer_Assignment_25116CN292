#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    int len = 0;
    while (str[len] != '\0') len++;
    bool is_pal = true;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_pal = false;
            break;
        }
    }
    if (is_pal) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;
    return 0;
}