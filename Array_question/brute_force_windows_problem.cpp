#include<iostream>
#include<vector>
using namespace std;


int maxi(int arr[],int size,int k){
    vector<int> add = {0};
    int sum = 0;
    int mx = 0;

    for(int i = 0;i<size;i++){
        for(int j = i;j<i+k;j++){
            if(j<size){
            sum = sum + arr[j];
            cout<<j<<" ";
            }
        }
            add.push_back(sum);
            sum = 0;
    }
    for(int i : add){
        mx = max(mx,i);
    }
    return mx;
}
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int size = 6;
    int k = 2;
    cout<<maxi(arr,size,k)<<endl;
    
    return 0;
}