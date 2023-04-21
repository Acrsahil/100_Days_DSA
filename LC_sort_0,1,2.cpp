#include<iostream>
using namespace std;
void Arrsort(int arr[],int n){
    int st = 0;
    int end = n-1;
    int mid = 0;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[st]);
            st++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[end]);
            end--;
        }
       
    }

for(int i = 0;i<n;i++){
 
    cout<<arr[i]<<" ";
}
}

int main(){
    int arr[5] = {2,0,2,1,0};
    int n = 5;
    Arrsort(arr,n);
    return 0;
}