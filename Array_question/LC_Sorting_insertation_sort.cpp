#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i = 1;i<n;i++){
        int j = i-1;
        int temp = arr[i];
        for(j;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];  
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }

}

int main(){
    int n = 5;
    int arr[n] = {5,4,100,2,1};
    sort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
