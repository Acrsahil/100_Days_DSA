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

void printstack(stack<int>s){
  stack<int>st = s;
  while(!s.empty()){
cout << s.top() << " ";
    s.pop();
  }
  cout << endl;
}

int  celibrity(vector<vector<int>>  &arr,int n){
  // 0(n^2) solution
  /*
  vector<int>knowme(n),iknow(n);
  for(int i = 0; i<n; i++){
    for(int  j = 0; j<n; ++j){
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  for(int i = 0; i<n; i++){
    for(int  j = 0; j<n; ++j){
      if(arr[i][j] == 1){
        knowme[j]++;
        iknow[i]++;
      }
    }
  }
  debug(knowme);
  debug(iknow);
  for(int i = 0; i<n; ++i){
    if(knowme[i] == n-1 && iknow[i] == 0){
      return i;
    }
  }
  return -1;
  */

  // 0(n) solution ;

  stack<int>st;
  for(int i = 0; i<n; ++i) st.push(i);

  while(st.size() > 1){
    int A = st.top();
    st.pop();
    int B = st.top();
    st.pop();


    if(arr[A][B] == 1){
      st.push(B);
    }else{
      st.push(A);
    }
  }
    cout << st.top() << endl;

  int zerocnt = 0,onecnt = 0;

  for(int i = 0; i<n; i++) {
    if(arr[st.top()][i] == 0)  zerocnt++;
    debug(st.top());
  }

  debug(zerocnt);
  for(int i = 0; i<n; i++) if(arr[i][st.top()] == 1)  onecnt++;
  debug(onecnt);
  if(onecnt == n-1 && zerocnt == n) return st.top();


  return -1;
}

void solve(){
  int n; cin >> n;
  vector<vector<int>>arr(n,vector<int>(n,0));


  for(int i = 0; i<n; ++i){
    for(int j = 0; j<n; j++){
      cin >> arr[i][j];
    }
  }
  int ans = celibrity(arr,n);
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
