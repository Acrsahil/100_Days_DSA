#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> x;
  vector<int> y;
  set<int> s;
  int p, q;
  cin >> p;
  x.resize(p);
  for (int i = 0; i < p; i++) {
    cin >> x[i];
    s.insert(x[i]);
  }
  cin >> q;
  y.resize(q);
  for (int i = 0; i < q; i++) {
    cin >> y[i];
    s.insert(y[i]);
  }

  if (s.size() == n) {
    cout << "I become the guy." << endl;
  } else {
    cout << "Oh, my keyboard!" << endl;
  }
  return 0;
}
