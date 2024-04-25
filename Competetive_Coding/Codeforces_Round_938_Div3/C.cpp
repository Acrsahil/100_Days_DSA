#include <bits/stdc++.h>
#include <deque>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define all(v) v.begin(), v.end()
#define ln long long int
#define test int t; cin >> t; while (t--)
#define ll long long
#define vi vector<int>
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> "; _print(x); cerr << endl
#else
#define debug(x)
#endif

void _print(int a) { cerr << a << " "; }
void _print(long long a) { cerr << a << " "; }
void _print(char a) { cerr << a << " "; }
void _print(string a) { cerr << a << " "; }
void _print(bool a) { cerr << a << " "; }
template <class T, class V> void _print(pair<T, V> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template <class T> void _print(vector<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(pair<T, T> p) { cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}"; }
template <class T, class V> void _print(multimap<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(unordered_set<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(unordered_multiset<T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(unordered_map<T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

void solve(){
  ll n,k; cin >> n >>k;
  deque<ll>dq(n);
  for(ll i = 0; i<n; i++) cin >> dq[i];
  ll cnt = 0;

  for(ll i = 1; i<=k; i++){
    if(dq.size() == 0){
      break;
    }
    if(i&1){
      if(dq.front()>0){
        ll temp = dq.front()-1;
        if (temp == 0) cnt++;
        dq.pop_front();
        if(temp){
          dq.push_front(temp);
        }
      }
    }else{
      if(dq.back()>0){
        ll temp = dq.back()-1;
        if(temp == 0) cnt++;
        dq.pop_back();
        if(temp){
          dq.push_back(temp);
        }
      }
    }
    cnt = min(cnt,n);
  }
  cnt = min(cnt,n);
  cout << cnt << endl;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/input.txt","r",stdin);
  freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/output.txt","w",stdout);
  freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/Error.txt", "w", stderr);
#endif

  test{
    solve();
}

return 0;
}
