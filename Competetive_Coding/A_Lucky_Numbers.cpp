#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
    test{
        int l, r;
        cin >> l >> r;
        int maxL = INT_MIN;
        int luckyNumber = -1;
        for (int i = l; i <= r; i++) {
            string temp = to_string(i);
            int maxi = INT_MIN,mini = INT_MAX;

            for (int j = 0; j < temp.size(); j++) {
                int n = int(temp[j]);
 
                maxi = max(n, maxi);
                mini = min(n, mini);
            }
            int curr = maxi - mini;
            if (curr > maxL) {
                maxL = curr;
                luckyNumber = i;
            }
            if(maxL == 9){
                break;
            }
        }
        cout << luckyNumber << endl;
    }
    return 0;
}
