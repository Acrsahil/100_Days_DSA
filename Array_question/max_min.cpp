#include<iostream>
using namespace std;

void printMax(int arr[] , int size){
    int max = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<"Max: "<<max<<endl;
}
void printMin(int arr[] , int size){
    int min = arr[0];
    for(int i = 0;i<size;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"Min: "<<min<<endl;
}
int main(){
    int size;
    int arr[100];
    cout<<"Enter teh size of array: ";
    cin>>size;
    for(int i = 0;i<size;i++){
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }
    printMax(arr,size);
    printMin(arr,size);
    return 0;
}