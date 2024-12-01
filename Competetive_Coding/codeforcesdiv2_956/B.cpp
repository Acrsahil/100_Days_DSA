/* Sahil Acharya */
#include <bits/stdc++.h>
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

void call(char &ch,int addval){
  ch = '0'+(ch-'0'+addval)%3;
}

void solve(){
  ll n,m; cin >> n >> m;
  vector<string>a(n),b(n);
  for(int i = 0; i<n; i++){
    cin >> a[i];
  }

  for(int i = 0; i<n; i++){
    cin >> b[i];
  }


  for(int i = 0; i<n-1; i++){
    for(int j = 0; j<m-1; j++){
      while(a[i][j] != b[i][j]){
        call(a[i][j],1);
        call(a[i+1][j+1],1);
        call(a[i][j+1],2);
        call(a[i+1][j],2);
      }
    }
  }
  if(a != b) cout << "NO" << endl;
  else cout << "YES" << endl;
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
