#include<iostream>
using namespace std;

void PrintArr(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Swap(int arr[],int size){
    for(int i = 0;i<size-1;i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){
    int arr[5] = {5,4,3,2,1};
    int size = 5;
    Swap(arr,size);
    PrintArr(arr,size);
    
    return 0;
}