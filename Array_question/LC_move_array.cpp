#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int nonzero = 0;
        int j = 0;
        while(j<nums.size()){
            if(nums[j] != 0){
                swap(nums[j],nums[nonzero]);
                nonzero++;
            }
            j++;

        }
        
    }

int main(){
    vector<int> nums = {0,1,0,3,1};
    moveZeroes(nums);
    for(int i : nums){
        cout<<i<<" ";
    }

    
    return 0;
}