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
        int n; cin >> n;
        vector<int> v(n);
        F(i,n){
            cin >> v[i];
        }
         bool only2 = false;
        int count = 0;
        if(n<=2){
             only2 =  true;
            for(int i = 0; i<n; i++){
                if(v[i]== -1){
                    count ++;
                }
                
            }
        int sum = 0;
        if(count == 1){
            for(int i = 0; i<n; i++){
                sum += v[i];
            }
            cout << sum << endl;
        }else if(count == 0){
            cout << -(n) << endl;
        }else if(count == 2){
            cout << n << endl;
        }
        }

        if(!only2){
            int count = 0;
            bool minus2 = false;
            bool minus1 = true;
            int sum = 0;
            for(int i = 0; i<n-1; i++){
                if(v[i] == -1 && v[i+1] == -1){
                    minus2 = true;
                    minus1 = false;
                }
                if(v[i] == -1){
                    count ++;
                }
                sum +=v[i];
            }
            sum = sum + v[n-1];
            if(v[n-1] == -1){
                count ++;
            }


            if(minus2){
                cout << 4+sum << endl;
            }else if(minus1 && count != 0){
                cout << sum << endl;
            }else if(count == 0){
                int spesum = 0;
                for(int i = 0; i<n-2; i++){
                    spesum += v[i];
                }
                cout << spesum -2 << endl;
            }
        }
    }
    

    


return 0;
}