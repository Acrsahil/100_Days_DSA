/* Sahil Acharya */
#include <algorithm>
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
  int n,m,q; cin >> n >> m >> q;
  vector<int>teacheres(m);
  for(int i = 0; i<m; i++) cin >> teacheres[i];
  sort(teacheres.begin(),teacheres.end());

  for(int i = 0; i<q; i++){
    int key; cin >> key;

    if(key<teacheres[0] ) cout << teacheres[0]-1 << endl;
    else if(key>teacheres[m-1]) {
      cout <<  n-teacheres[m-1] << endl;
    }

    else{
  int s = 0;
  int e = m-1;


    int ans1 = m-1;
    int ans2 = 0;

  while(s<=e){
    int mid = s+(e-s)/2;
    if(teacheres[mid]>key){
      e = mid-1;
      ans1 = mid;
    }else{
      ans2 = mid;
      s = mid+1;
    }
  }
      cout << (teacheres[ans1]-teacheres[ans2])/2 << endl;
    }
  }

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
