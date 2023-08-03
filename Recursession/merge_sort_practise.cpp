#include <iostream>
using namespace std;

void merge(int *arr, int s, int e, int mid, int n) {
    int *newarr = new int[n];
    int i = s, j = mid + 1, k = 0;

    while (i <= mid && j <= e) { // for left and right half
        if (arr[i] < arr[j]) {
            newarr[k++] = arr[i++];
        } else {
            newarr[k++] = arr[j++];
        }
    }
    while (i <= mid) {
        newarr[k++] = arr[i++]; // remaning part of left half
    }
    while (j <= e) {
        newarr[k++] = arr[j++];
    }
    // cout<<k<<endl;
    for (int i = 0; i < k; i++) { // remaining part of right half
        arr[s+i] = newarr[i];
    }
    delete[] newarr; // delete space
}




void mergesort(int *arr, int s, int e, int n) {
    if (s < e) {
        int mid = s + (e - s) / 2;
        mergesort(arr, s, mid, n); // left half 
        mergesort(arr, mid + 1, e, n);// right half
        for(int i = 0; i<n; i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
        merge(arr, s, e, mid, n); // merge element
    }
}
int main()
{
    int arr[5] = {5,4,3,2,1};
    int n = 5;
    int s = 0;
    int e = n-1;
    mergesort(arr,s,e,n);

    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0;
}