#include<iostream>
#include<vector>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int last = m+n-1;
        while(m>0 && n>0){
            if(nums1[m-1]>nums2[n-1]){
                nums1[last] = nums1[m-1];
                m--;
            }
            else{
                nums1[last] = nums2[n-1];
                n--;
            }
            last --;

        }
        while(n>0){
            nums1[last] = nums2[n-1];
            n--;
            last--;
        }
    }

int main() {
    int m = 3;
    int n = 3;
    vector<int> arr1 = {1, 2, 3, 0, 0, 0};
    vector<int> arr2 = {2, 5, 6};
    merge(arr1, m, arr2, n);
    
    for (int i = 0; i < m + n; i++) {
        cout << arr1[i] << " ";
    }

    return 0;
}
