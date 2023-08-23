#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    vector<vector<int>> allans;
    while (n--) {
        int num;
        cin >> num;

        vector<int>ans;
        int pow = 1;
        while (num != 0) {
            int rem = num % 10;
            if (rem) {
                ans.push_back(rem * pow);
            }
            num /= 10;
            pow *= 10;
        }
    allans.push_back(ans);
    }
    for(auto i : allans){
        cout<<i.size()<<endl;
        for(int j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}
