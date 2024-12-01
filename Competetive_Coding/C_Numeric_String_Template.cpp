#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define all(v) v.begin(), v.end()
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
  int n; cin >>n;
  vector<int>v(n);
  for(auto &i : v) cin>> i;

  int m; cin >> m;

  for(int x = 0; x<m; x++){
    string s; cin >> s;
    if(n != s.size()) {
      cout << "NO" << endl;
      continue;
    }

    map<int,char>mp1;
    map<char,int>mp2;

    bool ans = true;
    for(int i = 0; i<n; i++){
      if(mp1.find(v[i]) != mp1.end() || mp2.find(s[i]) !=mp2.end()){
        if(mp1[v[i]] != s[i] || mp2[s[i]] !=v[i]){
          ans = false;
          break;
        }
      }else{
          mp1[v[i]] = s[i];
          mp2[s[i]] = v[i];
          }
    }
    if(ans) py;
    else pn;

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

  test{
    solve();
}

return 0;
}
