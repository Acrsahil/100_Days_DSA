#include <bits/stdc++.h> using namespace std;

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


#define N 1000000

vector<bool> sieve() {
   vector<bool> isPrime(N + 1, true);  // Initialize all as true
    isPrime[0] = isPrime[1] = false;    // 0 and 1 are not prime

    for (int i = 2; i * i <= N; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= N; j += i) {
                isPrime[j] = false;  // Mark multiples of i as not prime
            }
        }
    }
  return isPrime;
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("Error.txt", "w", stderr);
#endif

  vector<bool> si = sieve();
  int t; cin >> t;
  while(t--){

  int n; cin >> n;
  if(n>1 && n <=4){
    cout << "-1" << endl;
    continue;
  }
    int cnt = 1;
  for(cnt = 1; cnt<=n; cnt++){
    cout << cnt << " ";
    cnt++;
  }
    cnt -=2;

  vector<int>ans;
  for(int i = 2; i<=n; ++i){
    ans.push_back(i);
    ++i;
  }
    debug(cnt);

if(si[cnt + ans[0]]){
  for(int i = 1; i<ans.size(); i++){
    if(si[cnt+ans[i]] == false){
      swap(ans[0],ans[i]);
        break;

    }
  }
}
  for(int i = 0; i<ans.size(); i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  }


return 0;
}
