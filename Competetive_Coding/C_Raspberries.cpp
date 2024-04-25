#include <bits/stdc++.h>
#include <map>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin >> t; while (t--)
#define ll long long
#define vi  vector<int>
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
  ll n,k; cin >> n >> k;
  map<ll,ll>mp;
  ll p = 1,x;
  for(int i = 0; i<n; i++){
    cin >> x;
    p *= x;
    p%=k;
    mp[x%k]++;
  }

  if(p%k == 0){
    cout << "0\n";
    return;
  }

  if(k==2){
    cout << "1\n";
    return;
  }

  if(k==3){
    if(mp[2]){
      cout << "1" << endl;
    }else{
      cout << "2\n";
    }
  }

  if(k==4){
    if(mp[3]) cout << "1\n";
    else if(mp[2] && mp[1]) cout << "1\n";
    else if(mp[1] >1) cout << "2\n";
    else if(mp[1]) cout << "3\n";
  }

  if(k==5){
    debug(p);
    if(mp[4]) cout << "1\n";
    else if(mp[3]) cout << "2\n";
    else if(mp[2]) cout << "3\n";
    else cout << "4\n";
  }

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
