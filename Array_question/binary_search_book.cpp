#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){ // where m = Student which is ture in this case
    int studentCount = 1;
    int pageSum = 0;
    for(int i = 0; i<n; i++){
        if(pageSum + arr[i]<=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
int allocate(int arr[],int n, int m){
    int s = 0;
    int sum = -1;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }

}

int main(){
    int n = 4;
    int arr[5] = {10,20,30,40};
    int m = 2;
    int ans = allocate(arr,n,m);
    cout<<"The minimum Book allocation by the student is: "<<ans<<endl;
    
    return 0;
}