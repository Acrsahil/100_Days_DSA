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
            int n;
            cin >> n;
            vector<int> a(n);
            vector<int> ans(n);
            F(i,n){cin >> a[i];}

            int cream = a[n-1];
            for(int i = n-1; i>=0; i--){
                if(cream != 0 || a[i] != 0){
                    // debug("hellow");
                    // debug(a[i]);
                    // debug(cream);
                    ans[i] = 1;
                    debug(ans[i]);
                    cream = max(cream,a[i]);
                    cream --;
                }else{
                    debug("not true") ;
                }
        }
        for(int i = 0; i<n; i++){
            cout << ans[i] << " ";
        }cout << endl;
        }
    return 0;
    }