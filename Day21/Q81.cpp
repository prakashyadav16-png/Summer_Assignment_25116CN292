#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin >> str;
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    cout << len << endl;
    return 0;
}