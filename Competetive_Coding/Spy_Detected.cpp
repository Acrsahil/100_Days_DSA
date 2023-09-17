#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        if (arr[0] != arr[1] && arr[0] != arr[2]) {
            ans = 1;
        } else {
            for (int i = 1; i < n; i++) {
                if (arr[i] != arr[i - 1]) {
                    ans = i + 1; // adding 1 for 1 based index
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

