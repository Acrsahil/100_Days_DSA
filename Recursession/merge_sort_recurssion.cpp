#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int x = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[x++];
    }

    x = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[x++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    x = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[x++] = first[index1++];
        }
        else{
            arr[x++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[x++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[x++] = second[index2++];
    }

    delete []first;
    delete []second;

}

void mergeSort(int *arr, int s, int e) {

    //base case
    if(s >= e) {
        return;
    }
    
    int mid = (s+e)/2;

    //left part sort karna h 
    mergeSort(arr, s, mid);
    
    //right part sort karna h 
    mergeSort(arr, mid+1, e);

    //merge
    merge(arr, s, e);

}

int main() {

    int arr[5] = {5,4,3,2,1};
    int n = 5;
    int e = n-1;

    mergeSort(arr, 0, e);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}