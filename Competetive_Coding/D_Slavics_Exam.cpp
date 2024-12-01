#include <bits/stdc++.h>
#include <string>
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

bool isSubsequence(const std::string& s, const std::string& t) {
    int i = 0, j = 0; // Pointers for s and t
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            j++; // Move pointer in t if characters match
        }
        i++; // Always move pointer in s
    }
return j == t.length();
}

void solve(){
  string s,t;
  cin >> s;
  cin >> t;
  int sn = s.size();
  int tn = t.size();
  // sequence matching
  int i = 0;
  int j = 0;
  while(i<sn && j<tn){
    if(s[i] == '?'){
      s[i] = t[j];
      i++;
      j++;
    }else if(s[i] == t[j]){
      i++;
      j++;
    }else{
      i++;
    }
  }
  if(j == tn){
    cout << "YES" <<endl;
    for(int i = 0; i<sn; i++){
      if(s[i] == '?'){
        cout << "a";
      }else{
        cout << s[i];
      }
    }
    cout << endl;
  }else{
    cout << "NO" << endl;
  }


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
