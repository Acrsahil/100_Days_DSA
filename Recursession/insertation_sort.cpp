#include <iostream>
using namespace std;

void insertionSort(int *arr,int i, int n){
    if(i == n){
        return;
    }
    int j = i;
    while(j>0 && arr[j-1]>arr[j]){ // it is written j>0 to reduce -1 case in array 
        swap(arr[j-1],arr[j]);
        j--;
    }
    return insertionSort(arr,i+1,n);
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    
    insertionSort(arr, 0, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    
    return 0;
}
