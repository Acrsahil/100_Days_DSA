#include <iostream>
using namespace std;

int binary(int arr[],int s , int e){
    if(arr[s]>arr[s+1]) return s;
    if(arr[e]>arr[e-1]) return e;
    
    int mid = s+(e-s)/2;
    if(arr[mid]>arr[mid-1]  && arr[mid]>arr[mid+1]){
        return mid;
    }
    else if(arr[mid]>arr[mid-1]){
        return binary(arr,mid+1,e);
    }else{
        return binary(arr,s,mid-1);
    }
    return -1;
}

int main()
{
    int arr[5] = {1,5,1,2,1};
    int n = 5;
    int e = n-1;
    int s = 0;
    cout<<"The index of the peak element is "<<binary(arr,s,e)<<endl;
    return 0;
}