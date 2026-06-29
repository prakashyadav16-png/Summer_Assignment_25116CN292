#include <iostream>
using namespace std;

int string_compare(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return a[i] - b[i];
        i++;
    }
    return a[i] - b[i];
}

void string_copy(char dest[], char src[]) {
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
    char names[50][100];
    for (int i = 0; i < n; i++) cin >> names[i];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (string_compare(names[i], names[j]) > 0) {
                char temp[100];
                string_copy(temp, names[i]);
                string_copy(names[i], names[j]);
                string_copy(names[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) cout << names[i] << endl;
    return 0;
}