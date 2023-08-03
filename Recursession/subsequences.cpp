#include <bits/stdc++.h>
using namespace std;

void subsequences(int ind,vector<int>&v,int n,int arr[]){
    if(ind == n){
        for(auto i : v){
            cout << i << " ";
        }
        if(v.size() ==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[ind]);
    subsequences(ind+1,v,n,arr);
    v.pop_back();
    subsequences(ind+1,v,n,arr);
}
int main()
{
    vector<int> v;
    int n = 3;
    int ind = 0;
    int arr[] = {3,1,2};
    subsequences(ind,v,n,arr);
    
    return 0;
}