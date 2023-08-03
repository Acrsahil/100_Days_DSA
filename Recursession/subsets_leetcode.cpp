#include <bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,vector<int>output,int index,vector<vector <int>> &ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums,output,index+1,ans);

    //include
    output.push_back(nums[index]);
    solve(nums,output,index+1,ans);

}

vector<vector <int>> subset(vector<int> &nums){
    vector<vector <int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums,output,index,ans);
    return ans;

}
int main()
{
vector <int> v = {3,1,2};
vector<vector<int>>ans = subset(v);

for(int i = 0; i<ans.size(); i++){
    for(int j = 0; j<ans[i].size(); j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}

}