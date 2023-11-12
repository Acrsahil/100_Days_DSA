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

int lower(int arr[],int s,int n, int x){
    int e = n-1;
    int ans = n;
     int mid = (s+e)>>1;
     mid = mid>>1;
    while(s<=e){
        debug(mid);
        if(arr[mid] >= x){
            ans = mid;
            e = mid -1; 
            debug(ans);
        }else{
            s = mid +1;
        }
        mid = (s+e)>>1;
    }
    return ans;
}
int upper(int arr[],int s,int n, int x){
    int e = n-1;
    int ans = n;
     int mid = (s+e)>>1;
     mid = mid>>1;
    while(s<=e){
        debug(mid);
        if(arr[mid] > x){
            ans = mid;
            e = mid -1; 
        }else{
            s = mid +1;
        }
        mid = (s+e)>>1;
    }
    return ans;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
     int arr[10] = {1,2,3,8,9,11,11,15,18,24};
     int s = 0;
     int n = 10;
     int x = 18;
     cout << "Using the custom function " << endl;
     cout << lower(arr,s,n,x)<< endl;
     cout << upper(arr,s,n,x)<< endl;
     cout << "Using the c++ algorithem" << endl;
     cout << lower_bound(arr,arr+n,x)-arr << endl;
     cout << upper_bound(arr,arr+n,x)- arr<< endl;


return 0;
}