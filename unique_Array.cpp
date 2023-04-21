#include<iostream>
using namespace std;
int unique(int arr[],int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {1,2,3,3,1,2,9};
    int size = 7;
    int ans = unique(arr,size);
    cout<<" The unique value inside the array is: "<<ans<<endl;


    return 0;
}