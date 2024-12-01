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

void _prll(int a) { cerr << a << " "; }
void _prll(long long a) { cerr << a << " "; }
void _prll(char a) { cerr << a << " "; }
void _prll(string a) { cerr << a << " "; }
void _prll(bool a) { cerr << a << " "; }
template <class T, class V> void _prll(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template <class T> void _prll(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _prll(set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _prll(multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _prll(map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _prll(pair<T, T> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template <class T, class V> void _prll(multimap<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _prll(unordered_set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _prll(unordered_multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _prll(unordered_map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
ll dist(ll a,ll b,ll c, ll d){
  ll ans = (a-c)*(a-c)+(b-d)*(b-d);
  return ans;
}
void solve(){
  ll n; cin >> n;
  vector<pair<int,int>>p;
  for(ll i= 0; i<n; i++){
    ll a,b; cin >> a >> b;
    p.push_back({a,b});
  }
  // for(int i =0; i<n; i++) cout << p[i].first << " " << p[i].second << endl;
  ll st1,st2,ed1,ed2;
  cin >> st1 >> st2 >> ed1 >> ed2;
   ll ans = dist(st1,st2,ed1,ed2);

  for(ll i = 0; i<n; i++){
    if((dist(p[i].first,p[i].second,ed1,ed2))<=ans){
      cout << "NO" << endl;
      return;
    }
  }
  cout << "YES" << endl;
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
