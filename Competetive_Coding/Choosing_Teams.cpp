#include <iostream>
using namespace std;

int main()
{
   int n,k;
   cin>>n >> k;
   int arr[n];
   int count = 0;
   int ans;
   for(int i = 0; i<n; i++){
    cin>>arr[i];
    if(arr[i]+k<=5){
        count++;

    }
   } 
    ans = count/3;
    cout <<ans<< endl;

    return 0;
}