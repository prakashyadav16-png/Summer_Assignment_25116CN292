#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[100], arr2[100], uni[200];
    int k = 0;
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
        uni[k++] = arr1[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
        bool found = false;
        for (int j = 0; j < k; j++) {
            if (arr2[i] == uni[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            uni[k++] = arr2[i];
        }
    }
    for (int i = 0; i < k; i++) {
        cout << uni[i] << " ";
    }
    cout << endl;
    return 0;
}