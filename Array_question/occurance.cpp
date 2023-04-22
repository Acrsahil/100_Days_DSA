#include<iostream>
using namespace std;

void function(int arr[],int size){
    int count = 0;
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if(arr[i]==arr[j]){
                count = count+1;
            }
        }
        cout<<count<<endl;
    }
    }

int main(){
    int arr[1000];
    int size = 1000;

    int arr[5] = {1,2,1,2,1};
    
    function (arr,size);


}