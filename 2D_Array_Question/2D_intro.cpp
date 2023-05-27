#include<iostream>
using namespace std;

// bool ispresent(int arr[][4],int target,int row, int col){
//     for(int i = 0;i<row;i++){
//         for(int j = 0;j<col;j++){
//             if(arr[i][j] == target){
//                 return 1;
//             }
           
//         }
//     }
//     return 0;
// }

 void sumrow(int arr[][3],int row,int col){
    for(int j = 0;j<3;j++){
    int sum = 0;
        for(int i = 0;i<3;i++){
            sum += arr[i][j];
        }
    cout<<sum<<" ";
    }
        cout<<endl;
 }
  void sumcol(int arr[][3],int row,int col){
    for(int i = 0;i<3;i++){
    int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
    cout<<sum<<" ";
    }
        cout<<endl;
 }
  int maxrow(int arr[][3],int row,int col){
    int maxiindex = 0;
    int maxi = 0;
    for(int i = 0;i<3;i++){
    int sum = 0;
        for(int j = 0;j<3;j++){
            sum += arr[i][j];
        }
    if(sum>maxi){
        maxi = sum;
        maxiindex = i;
    }
    }
    cout<<"Max element of the sum of row is "<<maxi<<endl;
    return maxiindex;
    cout<<maxiindex<<endl;
 }

int main(){
    int arr[3][3];
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    // cout<<"enter the element to search "<<endl;
    // int target;
    // cin>>target;

    // if(ispresent(arr,target,3,4)){
    //     cout<<"element found "<<endl;

    // }else{
    //     cout<<"Element not found"<<endl;
    // }
    cout<<"Sum of array for the row"<<endl;
    sumrow(arr,3,3);
    cout<<"Sum of array for the coloum"<<endl;
    sumcol(arr,3,3);
    int maxi = maxrow(arr,3,3);

    cout<<"index of the largest sum is "<<maxi<<endl;

    return 0;
}