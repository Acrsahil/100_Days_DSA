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
        int n;
        cin >> n;
        int a,b,k = INT_MAX;
        vector<pair<int,int>>v;
        F(i,n){
            cin >> a >> b;
            v.push_back({a,b});
        }
        for(int i = 0; i<v.size(); i++){
            k = min(v[i].first + (v[i].second-1)/2,k);

        }
        cout << k << endl;
    }
    return 0;
}