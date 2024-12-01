#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (ll i = 0; i < n; i++)
#define vi vector<ll>
#define ln long long ll
#define test ll t; cin >> t; while (t--)
#define ll long long

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


ll getsum(int i,int j,vector<pair<ll,char>>p){ // brute forces code
  ll sum = 0;
  while(i<j){
    sum += p[i].first;
    sum += p[j].first;
      i++;
    j--;
  }
    if (i == j) {
    sum += p[i].first;
  }
  return sum;
}

void solve(){
  ll n; cin >> n;
  vector<pair<ll,char>>p;
  vector<ll>v(n);
  for(ll i = 0; i<n;i++) {
    ll data; cin >> data;
    p.push_back({data,'a'});
  }
  for(ll i = 0; i<n;i++) {
    char data; cin >> data;
    p[i].second = data;
  }
  ll st = 0;
  ll ed = n-1;


  if(n >0) v[0] = p[0].first;


  for(ll i = 1; i<n; i++){
    v[i] = p[i].first+v[i-1];
  }

  while(p[st].second != 'L' && st<n) st++;
  while(p[ed].second != 'R' && ed>=0) ed--;


  if (st >= n || ed < 0 || st > ed) {
  cout << "0" << endl;
  return;
}

  ll sum = 0;

  if(st == 0) sum += v[ed];
  else sum += (v[ed]-v[st-1]);

  st++;
  ed--;
  while(st<=ed){
    debug(sum);
    if(p[st].second == 'L' && p[ed].second == 'R'){

      sum += (v[ed]-v[st-1]);
      st++;
      ed--;
      continue;
    }
    if(p[st].second != 'L'){
      st++;
    }
    if(p[ed].second != 'R'){
      ed--;
    }
  }
  cout << sum << endl;
  debug(sum);

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
