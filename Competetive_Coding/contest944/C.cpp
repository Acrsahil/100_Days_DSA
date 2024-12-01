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
void solve(){
  int a,b,c,d; cin >> a >> b >> c >> d;
  if(a<b) swap(a,b);
  if(c<d) swap(c,d);


  bool check1 = false;
  bool check2 = false;

  for(int i = a; i<=i+11; i++){
    int t = i%12;
    if(t == 0) t = 12;

    if(t == c || t == d){
      check1 = true;
      break;
    }
    if(t == b){
      break;
    }
  }
  if(!check1){
    cout << "NO" << endl;
    return;
  }
  for(int i = a; i>0; i--){

    if(i == c || i == d){
      check2 = true;
      break;
    }
    if(i == b){
      break;
    }
  }
  if(check1 && check2) cout << "YES" << endl;
  else cout << "NO" << endl;
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
