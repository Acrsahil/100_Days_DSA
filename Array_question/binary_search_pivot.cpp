#include<iostream>
using namespace std;

int pivot(int arr[], int n) {  // in this question pivot means minimum value on the given array
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid; 
        }
        mid = s + (e - s) / 2;
    }
    return s;
}


int main() {
    int arr[6] = {5,6,1,2,3,4};
    int n = 6;
    int p = pivot(arr, n);
    cout << "The pivot element index is " << p << endl;
    return 0;
}
