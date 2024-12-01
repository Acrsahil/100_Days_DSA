/* Sahil Acharya */
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define all(v) v.begin(), v.end()
#define ln long long ll
#define test ll t; cin >> t; while (t--)
#define ll long long
#define vi vector<ll>
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

void sahildas() {
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;

    cerr << "Time Taken: " << fixed << setprecision(6) << diff.count() << " seconds" << endl;
}


void solve(){
  ll n,x; cin >> n >> x;
  vector<ll>v(n);
  ll sum = 0;
  for(ll i = 0; i<n; i++) cin >> v[i],sum += v[i];
  ll maxi = *max_element(v.begin(),v.end());
  ll ans = (sum+x-1)/x;
  cout << max(maxi,ans) << endl;




}

int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/input.txt","r",stdin);
    freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/output.txt","w",stdout);
    freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/Error.txt", "w", stderr);
#endif

test   solve();
   sahildas();

    return 0;
}
