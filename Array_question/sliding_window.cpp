#include<iostream>
using namespace std;
int maxi(int arr[],int size,int k){
   int i = 0;
   int j = 0;
   int sum = 0;
   int mx = 0;
   while(j<size){
    sum += arr[j];
    if(j-i+1<k){
        j++;
    }else if(j-i+1 == k){
        mx = max(mx,sum);
        sum -= arr[i];
        i++;
        j++;

    }
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