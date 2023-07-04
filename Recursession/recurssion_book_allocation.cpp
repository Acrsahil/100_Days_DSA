#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

bool is_possible(int arr[], int barrier, int n, int k) {
    int count_std = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > barrier) return false;
        if (pages + arr[i] > barrier) {
            count_std += 1;
            pages = arr[i];
        } else {
            pages += arr[i];
        }
    }
    if (count_std > k) {
        return false;
    } else {
        return true;
    }
}

int book_allocation(int arr[], int s, int e, int n, int k) {
    int mid = s + (e - s) / 2;
    int res = -1;
    if (s >= e) { // Change the termination condition to s >= e
        return s;
    }
    if (is_possible(arr, mid, n, k)) {
        res = mid;
        return book_allocation(arr, s, mid, n, k); // Change the recursive call to mid
    } else {
        return book_allocation(arr, mid + 1, e, n, k);
    }
}

int main() {
    int arr[4] = {12, 34, 67, 90};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int s = arr[0];
    int e = accumulate(arr, arr + n, 0);

    cout << book_allocation(arr, s, e, n, k) << endl;
    return 0;
}

