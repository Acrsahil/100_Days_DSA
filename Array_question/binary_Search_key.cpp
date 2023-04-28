#include<iostream>
using namespace std;

int getpivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]>arr[0]){
            s = mid+1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}
int searchkey(int arr[],int n,int e,int k){ // arr,0,1,8;
    int s = n;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        else if(k<arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return -1;

}

int main(){
    int arr[5] = {3,8,10,17,2};
    int key = 8;
    int n = 5;
    int pt = getpivot(arr,n);
    if(key>=arr[pt] && key<=arr[n-1]){
        cout<<searchkey(arr,pt,n-1,key)<<endl;
    }
    else{
        cout<<searchkey(arr,0,pt-1,key)<<endl;
        
    }

    
    return 0;
}