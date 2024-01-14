#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  string s;
  cin >> s;

  unordered_map<char, int> up;
  for (auto x : s) {
    up[x]++;
  }
  string ans = "";

  for (auto x : up) {
    if (x.second % k) {
      cout << -1 << endl;
      return 0;
    } else {
      ans += string(x.second / k, x.first);
    }
  }
  for (int i = 0; i < k; i++) {
    cout << ans;
  }
  cout << endl;
}
