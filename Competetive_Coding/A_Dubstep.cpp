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
    string s ,ans;
    cin >> s;
    int n = s.size();
    if(n>3){

    for(int i = 0; i<n-2; i++){
        if(s[i] == 'W' && s[i + 1] == 'U' && s[i+2] == 'B'){ // change to '$';
            s[i] = '$'; s[i+1] = '$'; s[i+2] = '$';
        }
    }
    for(int i = 0; i<s.size()-2; i++){ // change to ' ';
        if(s[i]=='$' && s[i+1] == '$' && s[i+2] == '$'){ 
            s[i+2] = ' ';
        }
    }
    for(int i = 0; i<s.size(); i++){ // no '$' add to ans;
        if(s[i] != '$'){
            ans += s[i];
        }
    }
    int iterator = 0;
    while(ans[iterator] == ' '){ // finds first  char without space
        iterator++;
    }
    for(int i = iterator; i<ans.size(); i++){ // prints ans
        cout << ans[i];
    }
    }else{
        cout << s << endl;
    }
return 0;
}