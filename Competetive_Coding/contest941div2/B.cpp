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

bool check(vector<vector<char>>v,int n,int m,char ch){
  bool flag = false;
  // first column
  for(int i = 0; i<n; i++){
    if(v[i][0] == ch){
      flag = true;
      break;
    }
  }
  if(!flag) return false;
  flag = false;

  // last column
  for(int i = 0; i<n; i++){
    if(v[i][m-1] == ch){
      flag = true;
      break;
    }
  }

  if(!flag) return false;
  flag = false;

  // first row
  for(int i = 0; i<m; i++){
    if(v[0][i] == ch){
      flag = true;
      break;
    }
  }

  if(!flag) return false;
  flag = false;

  // last row
  for(int i = 0; i<m; i++){
    if(v[n-1][i] == ch){
      flag = true;
      break;
    }
  }
  if(!flag) return false;
  return true;
}
void solve(){
  int n,m;cin >> n >>m;
  vector<vector<char>>v(n,vector<char>(m));
  for(int i = 0; i<n; i++){
    for(int j = 0; j<m; j++ ){
      cin >> v[i][j];
    }
  }
  if(check(v,n,m,'W') || check(v,n,m,'B')){
    cout << "YES"<< endl;
  }else{
    cout << "NO" << endl;
  }

}
int main() {
#ifndef ONLINE_JUDGE
    freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/input.txt","r",stdin);
    freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/output.txt","w",stdout);
    freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/Error.txt", "w", stderr);
#endif

test{
    debug("hello");
   solve();
}

    return 0;
}
