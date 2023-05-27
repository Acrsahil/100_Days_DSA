#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }
        
        int writeIndex = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[writeIndex]) {
                writeIndex++;
                nums[writeIndex] = nums[i];
            }
        }
        
        return writeIndex + 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5, 5, 6, 7, 7};
    int ansindex = solution.removeDuplicates(nums);
    
    // Printing the elements up to ansindex
    for (int i = 0; i < ansindex; i++) {
        cout << nums[i] << " ";
    }
    cout << "Elements in nums are: " << ansindex << endl;

    return 0;
}
