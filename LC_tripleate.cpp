#include<iostream>
using namespace std;

int main(){
    int s = 12;
    int arr[8] = {2,-2,10,6,-3,11,5,3};
    for(int i = 0;i<8;i++){
                cout<<arr[i]<<" ";
        for(int j = i+1;j<8;j++){
            for(int k = j+1;k<8;k++){
        
            if(arr[i]+arr[j]+arr[k]==s){
                cout<<"("<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<")"<<" ";
            }
            }
        }
    }
    return 0;
}