#include <bits/stdc++.h>
#include <cstdint>
#include <vector>
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

void print(vector<int>v){
  for(int i = 0; i<v.size(); i++){
    cout << v[i] <<" ";
  }
  cout << endl;
}
void solve(){

  int n,k; cin >> n >> k;
  vi a(n),b(n),ans1,ans2;


  for(int i = 0; i<n; i++){
    cin >> a[i];
  }

  for(int i = 0; i<n; i++){
    cin >> b[i];
  }


  map<int,int>mp;
  for(int i = 0; i<n; i++){
    mp[a[i]]++;
  }


  int k1 = k*2;
  int k2= k*2;

  for(int i = 1; i<=n; i++){
    if(mp[i] == 1 && k1>0){
      k1--;
      k2--;
      debug("hello");
      ans1.push_back(i);
      ans2.push_back(i);
    }
  }
  if(ans1.size()%2 == 1){
    ans1.pop_back();
    ans2.pop_back();
    k1++;
    k2++;
  }
  for(int i = 1; i<=n; i++){
    if(mp[i] == 2 && k1>0){
      k1-=2;
      ans1.push_back(i);
      ans1.push_back(i);
    }
  }
  debug(mp);
  for(int i = 1; i<=n; i++){
    if(mp[i] == 0 && k2>0){
      k2-=2;
      ans2.push_back(i);
      ans2.push_back(i);
    }
  }
  print(ans1);
  print(ans2);
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
