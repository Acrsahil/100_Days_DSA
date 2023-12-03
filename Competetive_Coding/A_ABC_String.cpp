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
bool result(string expr) {
    stack<char> s;

    // Traversing the Expression
    for (int i = 0; i < expr.length(); i++) {
        if (expr[i] == '(') {
            // Push the element in the stack
            s.push(expr[i]);
        } else if (expr[i] == ')') {
            // Check for a matching opening parenthesis
            if (s.empty()) {
                return false;  // Unmatched closing parenthesis
            } else {
                s.pop();  // Matched closing parenthesis, pop from stack
            }
        }
    }

    return s.empty();  // If the stack is empty, parentheses are balanced
}



int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    test{
        string s; cin >> s;
        int n = s.size();

if(s[0] == s[n-1]){
    cout << "NO" << endl;
    continue;
}

        char st = s[0];
        char e = s[n-1];
        char x;

        if((s[0] == 'B' || s[n-1] == 'B') && (s[0] == 'A' || s[n-1] == 'A')){
            x = 'C';
        }else if((s[0] == 'A' || s[n-1] == 'A') && (s[0] == 'C' || s[n-1] == 'C')){
            x = 'B';
        }else{
            x = 'A';
        }
        debug(x);

        string s2 = s;

        for(int i = 0; i<n; i++){
            if(s[i] == st){
                s[i] = '(';
                s2[i] = '(';
            }
            if(s[i] == e){
                s[i] = ')';
                s2[i] = ')';
            }
            if(s[i] == x){
                s[i] = '(';
                s2[i] = ')';
            }
        }
        if(result(s) || result(s2)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        debug(s);
        debug(s2);
    }
return 0;
}