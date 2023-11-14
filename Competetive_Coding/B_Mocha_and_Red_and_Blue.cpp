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
int index(string s){
    int n = s.size();
    int ans = 0;
    for(int i = 0; i<n; i++){
        if (s[i] != '?'){
            ans = i;
            break;
        }
    }
    return ans;
}
char chars(string s){
    int n = s.size();
    char ans;
    for(int i = 1; i<n; i++){
        if (s[i] != '?'){
            ans = s[i];
            break;
        }
    }
    return ans;
}

string result(string &s,int n,string &S){
                for(int i = 1; i<n; i++){
                    if(s[i] == '?'){
                        if(S.back() == 'R'){
                            S.push_back('B');
                        }else if(S.back() == 'B'){
                            S.push_back('R');
                        }
                    }else{
                        S.push_back(s[i]);
                    }
                }
                return S;
}
bool  check(string s,int n){
    bool f = 1;
    for(int i = 0; i<n; i++){
        if(s[i] == 'B' || s[i] == 'R'){
            f = 0;
        }
    }
    return f;
}
string special(string s, int n){
    string ans = "";
    ans.push_back('B');
    for(int i = 1; i<n; i++){
        if(i&1){
            ans.push_back('R');
        }else{
            ans.push_back('B');
        }
    }
    return ans;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    test
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string S;
        char ch = chars(s);
        debug(ch);
        int ind = index(s) + 1;
        debug(ind);
        
        debug(check(s,n));
        if(check(s,n) && s.size()>1){
            string ans = special(s,n);
            cout << ans << endl;
            continue;
        }else{
        if (ind == 1)
        {
            if(s[0] == '?'){
                S.push_back('B');
                cout << S << endl;
                continue;
            }
            if(s.size() == 1 && s[0] != '?'){
                cout << s << endl;
                continue;
            }
            
            S.push_back(s[0]);
            string ans = result(s, n, S);
            cout << ans << endl;
            continue;
        }
        else
        {

            if (ind & 1)
            {
                S.push_back(ch);
                string ans = result(s, n, S);
                cout << ans << endl;
                continue;
            }
            else
            {
                if (ch == 'R')
                {
                    S.push_back('B');
                }
                else
                {
                    S.push_back('R');
                }
                string ans = result(s, n, S);
                cout << ans << endl;
                continue;
            }

            debug(chars(s));
        }
        }
    }
    return 0;
}