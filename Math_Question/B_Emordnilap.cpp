#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long
#define m  1000000007
int solve(int n){
    if(n == 1 || n== 0)
       return 1; 
    ll ans = 1;
    for(int i = 1; i<=n; i++){
        ans = (ans * i) %m;
    }
    return ans;
}
int main()
{
    test{
        ll n;
        cin >> n;
        ll ans =  (n*(n-1)%m) * solve(n)%m; // n*n(n-1) is done to find the maximum permutation in the given range
           cout << ans << endl; 
    }
    return 0;
}