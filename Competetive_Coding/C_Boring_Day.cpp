#include <bits/stdc++.h>
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

int findleft(vector<int>v,int n,int key){
  int s = 0;
  int e = n-1;
  int ans = -1;

  while(s<=e){
    int mid = s+(e-s)/2;
    if(v[mid]>=key){
      ans = mid;
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
  return ans;
}

int findright(vector<int>v,int n,int key){
  int s = 0;
  int e = n-1;
  int ans = -1;

  while(s<=e){
    int mid = s+(e-s)/2;
    if(v[mid]<=key){
      ans = mid;
      s = mid+1;
    }else{
      e = mid-1;
    }
  }
  return ans;

}

void solve(){
  int n,l,r; cin >> n >> l >> r;
  vector<int>v(n);
  for(auto &i : v) cin >> i;

  int sum = 0,ans = 0,j = 0;

  for(int i = 0; i<n; i++){
    sum += v[i];
    if(sum < l) continue;

    if(sum<=r){
      ans++;
      j = i+1;
      sum = 0;
      continue;
    }
    while(sum > r){
      sum -= v[j];
      j++;
    }

    if(sum >= l){
      ans++;
      sum = 0;
      j = i+1;
    }
  }
  cout << ans << endl;
  }


int main() {

ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt", "w", stderr);
#endif

test   solve();
sahildas();

    return 0;
}
