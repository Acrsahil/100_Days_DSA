#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
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

const auto start_time = std::chrono::high_resolution_clock::now();
void sahildas(){
auto end_time = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> diff = end_time - start_time;
cerr << "Time Taken: " << fixed << setprecision(4) << diff.count() << " seconds" << endl;
}
int n,k;
vector<int>v;
bool check(double x){
  int s = 0;
  for(int i = 0; i<n; i++){
    s+=(v[i]/x);
  }
  debug(s);
  return s>=k;
}
void solve(){
  cin >> n >> k;
  v.resize(n);
  for(int i = 0; i<n; i++){
    cin >> v[i];
  }

  double s = 0;
  double e = 1e8;
  cout << setprecision(7);
  cout << log(1e12);
  for(int i = 0; i<30; i++){
    double mid = (e+s)/2;
    if(check(mid)){
      s = mid;
    }else{
      e = mid;
    }
  }
  cout << s << endl;

}
int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("Error.txt", "w", stderr);
#endif

  solve();
  sahildas();

  return 0;
}
