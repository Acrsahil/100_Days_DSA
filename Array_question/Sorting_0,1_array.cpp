#include<iostream>
using namespace std;
void Sorting(int arr[],int n){
    int l = 0;
    int r = n-1;
    while(l<r){
        while(arr[l] == 0 && l<r){
            l++;
        }
        while(arr[r]==1 && l<r){
            r--;
        }
        if(l<r){
            swap(arr[l],arr[r]);
            l++;
            r--;
        }
    }

}
void printsort(int arr[],int n){
    cout<<"Sorted Array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[7] = {1,0,1,0,1,0,0};
    int n = 7;
    Sorting(arr,n);
    printsort(arr,n);

    return 0;
}