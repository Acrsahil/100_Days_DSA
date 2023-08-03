#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int i = 0;
    int j = nums.size() - 1;

    while (i <= j) {
        if (nums[i] == val) {
            swap(nums[i], nums[j]);
            j--;
        } else {
            i++;
        }
    }

return i;
}
int main()
{
    vector<int> nums = {1,3,2,2,5};
    int val = 2;
   int  n = removeElement(nums,val);
   for(int i = 0; i<n; i++){
    cout<<nums[i]<<" ";
   }cout<<endl;

    
    return 0;
}