#include<iostream>
using namespace std;
int occurance(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans;

    while(s<=e){ // {1,2,4,5,5,8,12}
        if(arr[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(key>arr[mid]){
            s = mid +1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2; 
    }
    cout<<mid<<endl;
    return ans;
}
int last_occ(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid+1;
        }
        else if(key>arr[mid]){
            s = mid +1;
        }
        else if(key<arr[mid]){
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}
int numoccurance(int first, int last,int key){
int ans = last - first +1;
return ans;
}

int main(){
    int arr[7] = {1,2,4,5,5,8,12};
    int n = 7;
    int key = 8;
    int fst = occurance(arr,n,key);
    int lst = last_occ(arr,n,key);
    cout<<"The 1st occurance of the key is "<<fst<<" index "<<endl;
    cout<<"The last occurance of the key is "<<lst<<" index "<<endl;
    int answer = (lst-fst)+1;
    cout<<"The number of occurance of the  "<<key<<" in the array is "<<answer<<endl;


    return 0;
}