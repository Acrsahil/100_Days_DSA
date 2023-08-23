#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &ans, int index, vector<int> nums) {
    if (index >= nums.size()) {
        ans.push_back(nums);
        return;
    }
    for (int j = index; j < nums.size(); j++) {
        cout<<"j: "<<j <<" index: "<< index << endl;
        swap(nums[index], nums[j]);
        solve(ans, index + 1, nums);
        //back tracking
        swap(nums[index],nums[j]);
    }
}
vector<vector<int>> permutation(vector<int> nums) {
    int index = 0;
    vector<vector<int>> ans;
    solve(ans, index, nums);
    return ans;
}

int main() {
    vector<int> s = {1,2,3};
    vector<vector<int>> ans = permutation(s);

    for (auto i : ans) {
        for (int num : i) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
