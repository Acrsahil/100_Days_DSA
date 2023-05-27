#include<iostream>
#include<vector>

using namespace std;
 vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int> ans;
        int i = 0;
        int j = 0;
        int sum = 0;
        for(int i = 0;i<n; i++){
            for(int j = i; j<n; j++){
                if(sum<=s){
               sum = sum+arr[j];
                }
               if(sum == s){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
               }
               
            }
            sum = 0;
        }
        ans.push_back(-1);
        return ans;
    }
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = 6;
    long long s = 5;

    vector<int> ans = subarraySum(arr,n,s);

    for(int i : ans){
        cout<<i<<" ";
    }

    
    return 0;
}