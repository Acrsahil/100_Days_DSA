#include <iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i = s; i<=e; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int first(int arr[], int s, int e, int key) {
    int ans = 0;
    int mid = s + (e - s) / 2;
    if (s > e) {
        return ans;  // Element not found
    }
    print(arr,s,e);
    cout<<"mid is "<<arr[mid]<<endl;
    cout<<endl;

    if (arr[mid] == key) {
        if(mid == 0 || arr[mid-1] != key){
            return mid;
        }else{
            return first(arr,s,mid-1,key);
        }

    } else if (key < arr[mid]) {
        return first(arr, s, mid - 1, key);
    } else {
        return first(arr, mid + 1, e, key);
    }
}
int last(int arr[], int s, int e, int key) {
    int ans = -1;
    int mid = s + (e - s) / 2;
    if (s > e) {
        return ans;  // Element not found
    }
    print(arr,s,e);
    cout<<"mid is "<<arr[mid]<<endl;
    cout<<endl;

    if (arr[mid] == key) {
        if(mid == e || arr[mid+1] != key){
            return mid;
        }else{
            return last(arr,mid+1,e,key);
        }

    } else if (key < arr[mid]) {
        return last(arr, s, mid - 1, key);
    } else {
        return last(arr, mid + 1, e, key);
    }
}
int occurance(int arr[],int s,int e,int key){
     int firstocc = first(arr,s,e,key);
     int lastocc  = last(arr,s,e,key);
     int ans = (lastocc - firstocc) + 1;
     return ans;
}

int main() {
    int n = 18;
    int arr[18] = {1,2,3,3,5,6,7,8,9,10,11,12,13,14,15,18,18,18};
    int s = 0;
    int e = n - 1;
    int key = 18;
    int ans = occurance(arr,s,e,key);
    if(ans!=0){
        cout<<key<<" is present "<< ans << " times in the array" <<endl;
    }else{

    cout<<key<<" is not found in the array "<<endl;
    }

    return 0;
}
