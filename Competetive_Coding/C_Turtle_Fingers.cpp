#include <bits/stdc++.h>
#include <cmath>
#include <vector>
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


vector<ll> divisiors(ll num){
  vector<ll> v;
  ll i = 1;
  while(i * i <= num){  // Use i * i <= num to avoid floating-point issues
    if(num % i == 0){
      v.push_back(i);  // i is a divisor
      if(i != num / i){  // Avoid adding the square root twice
        v.push_back(num / i);  // num / i is also a divisor
      }
    }
    i++;
  }
  return v;
}
void solve(){
  ll a,b,l; cin >> a >> b >> l;
  vector<ll>div = divisiors(l);
  debug(div);

  //for a
  vector<ll>x,y;
  for(int i = 0; i<=20; i++){
    int num = pow(a,i);
    if(num <=1e6){
      x.push_back(num);
    }
    else break;
  }

  for(int i = 0; i<=20; i++){
    int num = pow(b,i);
    if(num <=1e6){
      y.push_back(num);
    }
    else break;
  }


  int cnt = 0;
  for(int i = 0; i<(ll)div.size(); i++){
    ll k = div[i];
    ll f = 0;
    for(int j = 0; j<(ll)x.size(); j++){
      ll a = x[j];
      for(int m = 0; m<(ll)y.size(); m++){
        ll b = y[m];
        if(k*a*b == l){
          cnt++;
          f = 1;
          break;
        }
      }
      if(f == 1) break;
    }
  }
  cout << cnt << endl;




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
