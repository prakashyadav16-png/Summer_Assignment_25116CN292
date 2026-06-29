#include <iostream>
using namespace std;

int main() {
    char str[500];
    cin.getline(str, 500);
    int max_len = 0, max_start = 0;
    int curr_len = 0, curr_start = 0;
    int i = 0;
    while (true) {
        if (str[i] == ' ' || str[i] == '\0') {
            if (curr_len > max_len) {
                max_len = curr_len;
                max_start = curr_start;
            }
            if (str[i] == '\0') break;
            curr_len = 0;
            curr_start = i + 1;
        } else {
            curr_len++;
        }
        i++;
    }
    for (int j = max_start; j < max_start + max_len; j++) {
        cout << str[j];
    }
    cout << endl;
    return 0;
}