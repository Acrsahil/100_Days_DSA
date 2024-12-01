#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin >> t; while (t--)
#define ll long long

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
  int n; cin >> n;
  string s,t; cin >> s;
  cin >> t;
  string ans = s;


  vector<int>cnt0(n);
  vector<int>cnt1(n);

  cnt1[0] = ((s[0] == '1'));

  for(int i = 1; i<n; i++ ){
    if(s[i] == '1'){
      cnt1[i] = cnt1[i-1]+1;
    }else{
      cnt1[i] = cnt1[i-1];
    }
  }
  debug(cnt1);
  debug(cnt0);




  if(s == t){
     cout << "YES" << endl;
  }else{
    for(int i = 0; i<n; i++){
      if(s[i]!=t[i]){
        if(s[i] == '0'){
          // my ti will be 1
          if(cnt1[i]>0){
            ans[i] = '1';
          }

        }else{
          // my ti will be 0
          if(cnt1[i]>0){
            ans[i] = '0';
          }

        }
      }
    }
    if(ans == t){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  debug(ans);
  debug(t);
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
