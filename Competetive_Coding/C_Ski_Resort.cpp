
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<stack>
#include<unordered_map>
#include <math.h>
#include <climits>
#include <list>
#include <map>
#include <set>
#include <utility>
using namespace std;
#define ll long long
#define test int t; cin >> t; while(t--)
#define mod 10000007
#define vi vector<int>v;
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
  ll n,k,q; cin >> n >> k >> q;
  vector<int>v(n);
  for(ll i = 0; i<n; i++){
    cin >> v[i];
  }
  ll cnt = 0;
  for(ll i = 0; i<n;){
    if(v[i]>q){
      i++;
      continue;
    }
    ll tcnt = 0;
    while((i<n) && (v[i]<=q)){
      i++;
      tcnt++;
    }
    if(tcnt>=k){
      ll ab = (tcnt - k )+1;
      debug(ab);
      cnt += ((ab+1)*ab)/2;
    }
  }
  cout << cnt << endl;
  return;
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
