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

const auto start_time = std::chrono::high_resolution_clock::now();

void sahildas() {
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;

    cerr << "Time Taken: " << fixed << setprecision(6) << diff.count() << " seconds" << endl;
}


void solve(){
  string s;
  cin >> s;
  string ans = "";
  int n = s.size();

  for(int i = 2; i<n; i++){
    if(s[i] != s[i-1] && s[i-1]!= s[i-2] && s[i-2]!=s[i]){
      ans += s[i-2];
      ans += s[i-1];
      ans += s[i];
      cout << ans << endl;
      return;
    }

  }
  if(ans ==  ""){
    for(int i = 1; i<n; i++){
      if(s[i] == s[i-1]){
        ans += s[i-1];
        ans += s[i];
        cout << ans << endl;
        return;
      }
    }
  }
  cout << "-1" << endl;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/input.txt","r",stdin);
  freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/output.txt","w",stdout);
  freopen("/home/window/codehub/100_Days_DSA/Competetive_Coding/Error.txt", "w", stderr);
#endif

  test solve();
  sahildas();

  return 0;
}
