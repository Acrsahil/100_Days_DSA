#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,2};
    int arr2[5]= {2,1,3,9,7};
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            if(arr[i]==arr2[j]){
                cout<<arr[i]<<" ";
                arr[j] = 0;
                break;
            }
        }
    }
    return 0;
}