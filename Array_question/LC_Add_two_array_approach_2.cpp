#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n-1;
    int j = m - 1;
    int k = max(m,n)-1;
    int carry = 0;
    vector<int> ans(k+1);

    while(k>=0){
    
        int sum = carry;
        if (i >= 0) {
          sum += a[i];
        }
        if (j>=0) {
          sum += b[j];
        }
        

        int q = sum / 10;
        int r = sum % 10;

        ans[k] = r;
        carry = q;
        i--;
        j--;
        k--;
    }
    if(carry!=0){
        ans.insert(ans.begin(),carry);
    }
    return ans;
 
}


int main() {
    vector<int> a = {8, 10, 30};
    vector<int> b = {2, 7, 1};

    vector<int> result = findArraySum(a, 3, b, 3);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}


