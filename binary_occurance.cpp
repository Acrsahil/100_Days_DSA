#include <iostream>
using namespace std;

int first(int arr[], int n, int x) {
    int s = 0;
    int e = n - 1;
    int ans = 0;

    int mid = s + (e - s) / 2;
    while (s <= e) {

        if (arr[mid] == x) {
            ans = mid;
            e = mid - 1;
        } else if (x < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int last(int arr[], int n, int x) {
    int s = 0;
    int e = n - 1;
    int ans = -1;

    int mid = s + (e - s) / 2;
    while (s <= e) {

        if (arr[mid] == x) {
            ans = mid;
            s = mid + 1;
        } else if (x < arr[mid]) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

int count(int arr[], int n, int x) {
    int ans = 0;
    ans = last(arr, n, x) - first(arr, n, x) + 1;
    return ans;
}

int main() {
    int n = 5;
    int x = 2;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = count(arr, n, x);
    cout << ans << endl;

    return 0;
}
