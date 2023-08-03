#include <bits/stdc++.h> 
using namespace std;

int partation(vector<int>&arr, int s, int e){
    int pivot = arr[s];
    int i = s;
    int j = e;
    while(i<=j){
        while(arr[i]<=pivot){
            // cout<<i<<" ";
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[s],arr[j]);
    // cout<<arr[j]<<" ";
    // cout<<j<<" ";
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<j<<endl;
    return j;
}


void qs(vector<int>&arr,int s,int e){
    if(s<e){
        int p = partation(arr,s,e); 
        qs(arr,s,p-1);
        qs(arr,p+1,e);
    }
}
vector<int> quickSort(vector<int> arr)
{
  qs(arr,0,arr.size()-1);
  return arr;
}
int main(){
    vector<int> arr = {6,3,9,5,2,8};
    // {6,3,2i,5j,9i,8}
    // {5,3,2,6,9,8} --> final array call 1
    // {5,3,2,6,9,8}
    // {5,3,2ij}
    // {2,3,5,6,9,8} --> final array call 2
    // {2,3}



    vector<int> ans = quickSort(arr);
    for(int i = 0; i<arr.size(); i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

}