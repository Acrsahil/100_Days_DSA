#include<iostream>
using namespace std;

int sum_Arr(int arr[],int size){
    int sum = 0;
    for(int i = 0;i<size;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[100];
    for(int i = 0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element of the array: ";
        cin>>arr[i];
    }
    int sum = sum_Arr(arr,size);
    cout<<"The sum of the array is "<<sum<<endl;
    
    return 0;
}