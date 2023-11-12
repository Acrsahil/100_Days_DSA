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

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    test{
        int n,a,b; cin >> n >> a >> b;
        vector<int>v;
        v.push_back(a);

        int x  = n;
        for(int i = 2; i<=n/2; i++){
            while(a == x || b == x) {
                debug(x);
                x--;
                debug(x);
            }
            v.push_back(x); x--;
            debug(x);
        }
        x = 1;
        for(int i = n/2+1; i<=n; i++){
            while(a == x || b == x){
                x++;
            } 
            debug(x);
            v.push_back(x); x++;
            debug(x);
        }
        v[n-1] = b;
        bool f = false;
        for(int i = 0; i<n/2; i++){
            if(v[i]<a){
                f = true;
                break;
            }
        }
        for(int i = n/2; i<n; i++){
            if(v[i]>b){
                f = true;
                break;
            }
        }
        if(f){
            cout << -1 << endl;
        }else{
            for(int i = 0; i<n; i++){
                cout << v[i] << " ";
            }cout << endl;
        }

    debug(v);
    }
    
return 0;
}