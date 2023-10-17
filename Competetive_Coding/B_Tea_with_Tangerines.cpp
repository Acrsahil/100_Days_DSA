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
        int n; cin >> n;
        vector<int>v(n);
        int ans = 0; 
        for(auto & i : v){
            cin >> i;
            ans += (i-1)/(2*v[0]-1);

        }
        cout << ans << endl;
    }
    return 0;
}