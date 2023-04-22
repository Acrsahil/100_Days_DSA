#include<iostream>
using namespace std;
int occurance(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans;

    while(s<=e){ // {1,2,4,5,5,8,12}
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid +1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int last_occ(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]){
            s = mid +1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,4,5,5,8,12};
    int n = 7;
    int key = 5;
    int ans = occurance(arr,n,key);
    int lst = last_occ(arr,n,key);
    cout<<"The 1st occurance of the key is "<<ans<<" index "<<endl;
    cout<<"The last occurance of the key is "<<lst<<" index "<<endl;
    return 0;
}