#include<iostream>
using namespace std;
int  pivot(int arr[],int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
    
}

int main(){
    int arr[5] = {3,8,10,17,1};
    int n = 5;
    int p = pivot(arr,n);
    cout<<"The pivot element index is "<<p<<endl;
    return 0;
}