#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
    if(arr[s]>arr[s+1]) return s;

    if(arr[e]>arr[e-1]) return e;

    if(arr[mid]>arr[mid-1]  && arr[mid]>arr[mid+1]) return mid;

    if(arr[mid]>arr[mid-1]){
        s = mid+1;

    }else if(arr[mid]>arr[mid+1]){
        e = mid-1;
    }
    mid = s+(e-s)/2;

    }
    return -1;
}
int main(){
    int arr[7] ={20,8,9,10,5,4,2};
    int n = 7;
    int ans = peak(arr,n);
    cout<<"The peak element of the given array is "<<ans<<endl;
    return 0;
}