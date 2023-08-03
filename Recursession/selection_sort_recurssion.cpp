#include <iostream>
using namespace std;

void selectionSort(int *arr, int n, int i = 0) {
    if (i == n - 1) {
        return;
    }

    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[i]) {
            swap(arr[j], arr[i]);
            
        }
    }
    selectionSort(arr, n, i + 1);             
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    
    selectionSort(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
