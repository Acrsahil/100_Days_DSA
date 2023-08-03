#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

bool is_possible(int arr[], int barrier, int n, int k) {
   int countstd = 1;
   int pages = 0;
   for(int i = 0; i<n; i++){
    if(arr[i]>barrier) return false;

    if(arr[i]+pages > barrier){
        countstd += 1;
        pages += arr[i];
    }else{
        pages += arr[i];
    }
   }
   if(countstd>k){
    return false;
   }else{
    return true;
   }
}

int book_allocation(int arr[], int s, int e, int n, int k) {
   int mid = s+(e-s)/2;
   int res = -1;
   if(s>=e){
    return s;
   }
   if(is_possible(arr,mid,n,k)){
    res = mid;
    return book_allocation(arr,s,mid,n,k);
   }else{
    return book_allocation(arr,mid+1,e,n,k);
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

