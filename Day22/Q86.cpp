#include <iostream>
using namespace std;

int main() {
    char str[500];
    cin.getline(str, 500);
    int words = 0;
    bool in_word = false;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!in_word) {
                words++;
                in_word = true;
            }
        } else {
            in_word = false;
        }
    }
    cout << words << endl;
    return 0;
}