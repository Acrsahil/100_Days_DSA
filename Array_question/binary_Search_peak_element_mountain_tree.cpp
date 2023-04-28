#include<iostream>
using namespace std;
int peak(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
    if(arr[mid]<arr[mid+1]){
        s = mid+1;

    }else{
        e = mid;
    }
    mid = s+(e-s)/2;

    }
    return s;
}
int main(){
    int arr[5] ={1,4,7,7,1};
    int n = 5;
    int ans = peak(arr,n);
    cout<<"The peak element of the given array is "<<ans<<endl;
    return 0;
}