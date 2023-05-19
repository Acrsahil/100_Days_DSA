#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i = 1; i<n;i++){
        // for round 1 to n-1
        bool swapped = false;
        for(int j = 0;j<n-i;j++){
            // process element till n-1 th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped = false){
            //alredy sorted
            break; 
        }
    }
}

int main(){
   int n = 5;
   int arr[5] = {4,3,1,2,5};

    sort(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;

}