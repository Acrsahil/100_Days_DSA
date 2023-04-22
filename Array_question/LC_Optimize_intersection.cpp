#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,10};
    int arr2[6] = {4,5,5,8,10,12};

    int ans[5];
    int i = 0;
    int j = 0;
    while(i<6 && j<6){
        if(arr[i]==arr2[j]){
            cout<<arr[i]<<endl;
            i++;
            j++;
         }else if(arr[i]<arr2[j]){
            i++;

         }
         else{
            j++;
         }
    }
    return 0;
}
