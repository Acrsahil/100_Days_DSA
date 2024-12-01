#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define F(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define all(v) v.begin(), v.end()
#define ln long long ll
#define test ll t; cin >> t; while (t--)
#define ll long long
#define vi  vector<ll>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
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

const auto start_time = std::chrono::high_resolution_clock::now();
void sahildas(){
auto end_time = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end_time - start_time;
cerr << "Time Taken: " << fixed << setprecision(4) << diff.count() << " seconds" << endl;
}
ll find_gcd(ll a,ll b){
  return (a == 0) ? b : find_gcd(b%a,a);
}
void solve(){
  ll n; cin >> n;
  vector<ll>v(n),ans(n);
  for(ll i = 0; i<n; ++i) cin >> v[i];

  ll lcm = v[0],sum = v[0];
  for(ll i = 1; i<n; i++){
    lcm = (lcm*v[i])/find_gcd(lcm,v[i]);
  } // finding lcm of array


  for(ll i = 0; i<n; i++) ans[i] = lcm/v[i];
  if(accumulate(ans.begin(),ans.end(),0LL)>=lcm){
    cout << -1 <<endl;

  }else{
    for(ll i = 0; i<n; i++){
      cout << ans[i] << " ";
    }
    cout << endl;
  }
}
int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt", "w", stderr);
#endif

test   solve();
sahildas();

    return 0;
}
