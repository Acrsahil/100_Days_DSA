#include <bits/stdc++.h>
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

void merge(vector<int>&arr,int low,int mid,int high){
  // int temp[5000];
  // int i = low;
  // int j = mid+1;
  // int k = low;
  //
  // while(i<=mid && j<=high){
  //   if(arr[i] < arr[j]){
  //     temp[k++] = arr[i++];
  //   }else{
  //     temp[k++] = arr[j++];
  //   }
  // }
  // while(i<=mid){
  //   temp[k++] = arr[i++];
  // }
  // while(j<=high){
  //   temp[k++] = arr[j++];
  // }
  // for(int i = low; i<=high; i++){
  //   arr[i] = temp[i];
  // }
  int left = low;
  int right = mid+1;
  vector<int> temp;
  while(left<=mid && right <= high){
    if(arr[left]<arr[right]){
      temp.push_back(arr[left++]);
    }else{
      temp.push_back(arr[right++]);
    }
  }
  while(left<=mid){
    temp.push_back(arr[left++]);
  }
  while(right<=high){
    temp.push_back(arr[right++]);
  }
  for(int i = low; i<=high; i++){
    arr[i] = temp[i-low];
  }
}

void mergesort(vector<int>&arr,int low,int high){
  if(low<high){
    int mid = (low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}

void solve(){
  vector<int>arr = {14,8,1,6,1,2,4,3,9,2};
  int n = arr.size();
  int low = 0;
  int high = n-1;

  mergesort(arr,low,high);
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("Error.txt", "w", stderr);
#endif

  solve();

  return 0;
}
