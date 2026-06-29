#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    int v = 0, c = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                v++;
            } else {
                c++;
            }
        }
    }
    cout << "Vowels: " << v << " Consonants: " << c << endl;
    return 0;
}