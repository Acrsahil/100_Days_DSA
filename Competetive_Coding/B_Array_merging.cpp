#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin >> t; while (t--)
#define ll long long

void solve() {
    int n;
    cin >> n;

    vi a(n), b(n);
    F(i, n) cin >> a[i];
    F(i, n) cin >> b[i]; // Fixed: reading into array b

    map<int, int> fa, fb;
    int current = 1;

    // Calculating consecutive frequencies for array a
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i - 1]) {
            fa[a[i - 1]] = max(fa[a[i - 1]], current);
            current = 1;
        } else {
            ++current;
        }
    }
    fa[a[n - 1]] = max(fa[a[n - 1]], current);

    current = 1;

    // Calculating consecutive frequencies for array b
    for (int i = 1; i < n; i++) {
        if (b[i] != b[i - 1]) {
            fb[b[i - 1]] = max(fb[b[i - 1]], current);
            current = 1;
        } else {
            ++current;
        }
    }
    fb[b[n - 1]] = max(fb[b[n - 1]], current);

    int ans = 0;

    // Calculating the maximum sum of consecutive frequencies
  for(auto &i : fa){
    cout << i.first << "->"<< i.second << endl;
  }
  cout << endl;
  for(auto &i : fb){
    cout << i.first << "->"<< i.second << endl;
  }
    for (auto i : a) ans = max(ans, fa[i] + fb[i]);
    for (auto i : b) ans = max(ans, fa[i] + fb[i]);

    cout << ans << "\n";
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt", "w", stderr);
#endif
    test {
        solve();
    }
    return 0;
}
