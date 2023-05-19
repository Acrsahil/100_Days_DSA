#include<iostream>
using namespace std;

bool painter_possible(int arr[],int n,int k,int mid){
    int painter = 1;
    int block = 0;
    for(int i = 0;i<n;i++){
        if(block + arr[i]<=mid){
            block += arr[i];
        }
        else{
            painter++;
            if(painter>k || arr[i]>mid ){
                return false;
            }
            block = arr[i];
        }

    }
    return true;
}


int allocate(int arr[],int n,int k){
    int s = 0;
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(painter_possible(arr,n,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int main(){
    int arr[4] = {5,5,5,5};
    int n = 4;
    int k = 2;
    int ans = allocate(arr,n,k);
    cout<<"The minimum time to paint the whole section is: "<<ans<<endl;
    

    
    return 0;
}