#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int newarr[n];
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main(){
   int n = 5;
   int arr[5] = {5,4,3,2,1};

    sort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}