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
void solve(){

        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        string t;
        cin >> t;
        bool check = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1]) // checking for s element
            {
                check = true;
            }
        }
        if(!check){
            cout << "YES" << endl;
            return;
        }

        if((!(m&1)) || t[0] != t[m-1]){ // checking for t string element (first and last)
            cout << "NO" << endl;
            return;
        }

        bool isvalid = true; 
        for(int i = 0; i<m-1; i++){
            if(t[i] == t[i+1]){ // checking for all element of t string
                isvalid = false;
            }
        }
        if(!isvalid){
            cout << "NO" << endl;
            return;
        }
        char ch = t[0];
        for(int i = 0; i<n-1; i++){
            if(s[i] == s[i+1]){ 
                if(ch == '0' && s[i] == '0') { // if both the t string  and s string have 0
                    cout << "NO" << endl;
                    return; 
                }
                if(ch == '1' && s[i] == '1'){ // if both the t string  and s string have 1
                    cout << "NO" << endl;
                    return;
                }
            }
        }
        cout << "YES" << endl;
        return;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    test
    {
        solve();
    }
    return 0;
}