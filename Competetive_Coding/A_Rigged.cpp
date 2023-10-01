
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
        int n,a,b;
        cin >> n;
        vector<pair<int,int>> mp;
        bool check = 1;
        F(i,n){
            cin >> a >> b;
            mp.push_back({a,b});
        }
        pair<int,int> maxmp = make_pair(mp[0].first,mp[0].second);
        for(int i = 1; i<n; i++)
        {
            if (mp[i].first >= maxmp.first && mp[i].second >= maxmp.second)
            {
            check = 0;
            }

        }
            if (check)
            {
                cout << maxmp.first << endl;
            }
            else
            {
                cout << -1 << endl;
            }
    }
        
    return 0;
}