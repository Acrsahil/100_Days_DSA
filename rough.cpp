#include<iostream>
using namespace std;

int main(){
    int s = 5;
    int arr[5] = {10,2,-3,8,-5};
    int i=0;
    while(i<5){
        int j = i+1;
        while(j<5){
            if(arr[i]+arr[j]==s){
                cout<<"("<<arr[i]<<" "<<arr[j]<<")"<<" ";
            }
            j++;
        }
        i++;
    }
    return 0;
}