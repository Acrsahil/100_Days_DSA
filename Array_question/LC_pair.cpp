#include<iostream>
using namespace std;

int main(){
    int s = 8;
    int arr[8] = {2,-2,10,6,-3,11,5,3};
    for(int i = 0;i<8;i++){
        for(int j = i+1;j<8;j++){
            if(arr[i]+arr[j]==s){
                cout<<"("<<arr[i]<<" "<<arr[j]<<")"<<" ";
            }
        }
    }
    return 0;
}