#include <iostream>
using namespace std;

void selectionSort(int *arr, int n, int i) {
    if (n == 0) {
        return;
    }

    for (int j = 0; j < n; j++) {
        if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            
        }
    }
    selectionSort(arr, n, i+1);             
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    int i = 0;
    
    selectionSort(arr, n,i);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
