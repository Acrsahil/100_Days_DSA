#include<iostream>
using namespace std;

int pivot(int arr[], int n, int s, int e) {
    int mid = s + (e - s) / 2;
    int res = -1;
    if (s >= e) {
        return s;
    }
    if(arr[0]<arr[n-1]) return s; // it is extra edge case to handel

       if (arr[mid] > arr[e]) {
        return pivot(arr, n, mid + 1, e);
    }  else {
       return pivot(arr, n, s, mid);
    }
    return -1;
}

int main() {
    int arr[6] = {1,2,3,4,5,6};
    int n = 6;
    int s = 0;
    int e = n - 1;
    int p = pivot(arr, n, s, e);
    cout << "The pivot element index is " << p << endl;
    return 0;
}
