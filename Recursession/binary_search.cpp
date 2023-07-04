#include <iostream>
using namespace std;
void print(int arr[],int s,int e){
    for(int i = s; i<=e; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarysearch(int arr[],int s,int e, int key){
    int mid = s+(e-s)/2;
    if(s>e){
        return false;
    }
    print(arr,s,e); // --> To print every array after each function
    cout<<"mid is "<<arr[mid]<<endl<<endl;// --> print mid after every function call
    if(arr[mid] == key){
        return true;
    }
    if(key<arr[mid]){
        return binarysearch(arr,s,mid-1,key); // --> recurssive call smaller element

    }else{
        return binarysearch(arr,mid+1,e,key);// --> recurssive call for greater element
    }
}
int main()
{
    int arr[20] = {1,2,3,4,5,6,8,10,12,18,22,24,26,28,30,38,200,2001,40001,20000};
    int s = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    int e = n-1;
    int key = 1;
    if(binarysearch(arr,s,e,key)){
        cout<<"Element is present in array "<<endl;
    }else{
        cout<<"Element is not present in array"<<endl;
    }

    
    return 0;
}