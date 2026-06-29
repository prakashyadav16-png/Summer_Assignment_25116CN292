#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n >> key;
    int arr[100];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int low = 0, high = n - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            ans = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}