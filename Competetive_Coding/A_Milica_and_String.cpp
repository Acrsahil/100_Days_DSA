// @idr1ska

#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt = 0;
    for(auto i : s){
        if(i == 'B'){
            cnt ++;
        }
    }

    if(cnt == k){
        cout << 0 << endl;
        return;
    }
    else if(cnt > k){
        cout << 1 << endl;
        for(int i = 0; i<n; i++){
            if(s[i] == 'B'){
                cnt--;
            }
            if(k == cnt ){
                cout << i+1 << " " << 'A' << endl;
                return;
            }
        }
    }else{
        cout << 1 << endl;
        for(int i = 0; i<n; i++){
            if(s[i] == 'A'){
                cnt++;
            }
            if(cnt == k){
                cout << i+1 << " "<< 'B' << endl;
                return;
            }
        }
    }
}
 
signed main() {
    // freopen("input", "r", stdin);
    // freopen("output1", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int test = 1;
    cin >> test;
    while (test--) {
        solve();
    }
}