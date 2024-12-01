#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define ln long long ll
#define test ll t; cin >> t; while (t--)
#define ll long long

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> "; _prll(x); cerr << endl
#else
#define debug(x)
#endif


void solve(){
  ll n,k; cin >> n >> k;
  vector<ll>v(n);
  for(ll i = 0; i<n ;i++){
    cin >> v[i];
  }
  sort(v.begin(),v.end());
  ll sub = 0;
  ll ans = k;


  for(ll i= 0; i<n; i++){
    v[i]-=sub;
    cout << "v[i]->" << v[i] << endl;
    ll subcan = (n-i)*v[i];
    cout << "subcan->" << subcan << endl;
    if(k<subcan) k-=k;
    else k-=subcan;
    cout << "subcan->" << subcan << endl;
    cout << "k->" << k << endl;


    if(k == 0) break;
    else ans++;
    sub+=v[i];
    cout <<"sub->" << sub << endl;
  }
  cout << ans << endl;



}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("Error.txt", "w", stderr);
#endif

  test{
    solve();
}

return 0;
}
