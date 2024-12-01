#include <bits/stdc++.h>
#include <vector>
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


int findpivit(vector<int> &arr,int n){
  int s = 0,e = n-1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(mid>0 && mid<n-1){
      if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        return mid;
      }else if(arr[mid]>arr[mid-1]){
        s = mid+1;
      }else{
        e = mid-1;
      }
    }else{
      if(mid == 0 && arr[0]>arr[1]){
        return 0;
      }else if(mid == n-1 && arr[n-1]>arr[n-2]){
        return n-1;
      }
    }
  }
  return -1;
}


int binarysearch(vector<int>&arr,int n ,int key,bool left,int val){
  int s = 0,e = n-1;
  if(left) e = val;
  else s = val;

  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid] == key){
      return mid;
    }else if(key<arr[mid] && left){
      e = mid-1;
    }else if(left){
      s = mid+1;
    }else if(key<arr[mid] && !left){
      s = mid+1;
    }else if(!left){
      e = mid-1;
    }
  }
  return -1;
}




int solve(vector<int>&A, int B) {
  int n1 = A.size();
  int pivot = findpivit(A,n1);

  int  leftsearch = binarysearch(A,n1,B,true,pivot-1);
  int rightsearch = binarysearch(A,n1,B,false,pivot);

  return max(leftsearch,rightsearch);


}


int mySqrt(int x) {
  int s = 1;
  int e = x;


  while(s<=e){
    int mid = s+(e-s)/2;
    debug(s);
    debug(e);
    debug(mid);
    if((double)mid*mid>x){
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
  return e;
}


int lowerbound(vector<int>&v,int key){
  int s = 0,e = v.size()-1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(key<=v[mid]){
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
  return e;
}
vector<int> ans(vector<int>& numbers, int target1,int target2){
  int s = 0, e = target2;
  vector<int>ans(2,0);
  while(s<=e){
    int mid = s+(e-s)/2;
    if(numbers[mid]+numbers[e] == target1){
      ans[0] = mid;
      ans[1] = e;
      return ans;
    }else if(numbers[mid]+numbers[e]>target1 ){
      e = mid-1;
    }else{
      s = mid+1;
    }
  }
    return ans;
}

vector<int> twoSum(vector<int>& numbers, int target) {
  map<int,int>mp;
  vector<int>ans;
  int n = numbers.size();
  for(int i = 0; i<n; i++){
    int required = abs(target-numbers[i]);
    if(mp[required]>0){
      ans.push_back(i+1);
      ans.push_back(mp[required]);
      break;
    }else{
      mp[numbers[i]] = (i+1);
    }
  }
  return ans;
    }


string read(int n, vector<int> book, int target)
{
  int l = 0,r = n-1;

  while(l<=r){
    int sum = book[l]+book[r];
    if(sum == target){
      return "YES";
    }
    else if(sum < target){
      l++;
    }else{
      r++;
    }
  }
  return "NO";
  
}




void solve(){
  vector<int>arr = {2,7,9,14,20,22};
  int key = 11;
  int n = 6;
  map<int,int>mp;
  // cout << solve(arr,key) << endl;
  // cout << mySqrt(8) << endl;


  // debug(twoSum(arr,key));
  debug(twoSum(arr,key));
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  freopen("Error.txt", "w", stderr);
#endif

  {
    solve();
  }

  return 0;
}
