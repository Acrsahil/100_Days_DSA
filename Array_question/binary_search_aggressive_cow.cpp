#include<iostream>
using namespace std;

bool ispossible(int stalls[],int k,int mid,int size){
    int cowCount = 1;
    int lastPosition = stalls[0];

    for(int i = 0; i<size;i++){
        if(stalls[i]-lastPosition>=mid){
            cowCount++;
            if(cowCount ==k){
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}


int aggressive_cow(int stalls[],int k,int n){
    int s = 0;
    int maxi = -1;
    for(int i = 0;i<n;i++){
        maxi = max(maxi,stalls[i]);

    }
    int e = maxi;
    int ans = -1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(ispossible(stalls,k,mid,n)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s +(e-s)/2;
    }
    return ans;

}

void sort(int arr[],int n){
    int newarr[n];
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int n = 5;
    int arr[n] = {4,3,1,2,6};
    int k = 2;
    sort(arr,n);
    int ans = aggressive_cow(arr,k,n);
    cout<<"The Maximum distance of the 2 cow is:  "<<ans<<endl;
    
    return 0;
}