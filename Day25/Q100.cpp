#include <iostream>
using namespace std;

int string_length(char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

void string_copy_local(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main() {
    int n;
    cin >> n;
    char words[50][100];
    for (int i = 0; i < n; i++) cin >> words[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (string_length(words[i]) > string_length(words[j])) {
                char temp[100];
                string_copy_local(temp, words[i]);
                string_copy_local(words[i], words[j]);
                string_copy_local(words[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) cout << words[i] << " ";
    cout << endl;
    return 0;
}