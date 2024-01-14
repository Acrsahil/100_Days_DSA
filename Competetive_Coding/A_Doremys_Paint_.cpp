#include <bits/stdc++.h>
using namespace std;

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define ln long long int
#define test                                                                   \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)
#define ll long long

#ifndef ONLINE_JUDGE
#define debug(x)                                                               \
  cerr << #x << " -> ";                                                        \
  _print(x);                                                                   \
  cerr << endl
#else
#define debug(x)
#endif

void _print(int a) { cerr << a << " "; }
void _print(long long a) { cerr << a << " "; }
void _print(char a) { cerr << a << " "; }
void _print(string a) { cerr << a << " "; }
void _print(bool a) { cerr << a << " "; }

template <class T, class V> void _print(pair<T, V> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T> void _print(vector<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(pair<T, T> p) {
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T, class V> void _print(multimap<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(unordered_set<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T> void _print(unordered_multiset<T> v) {
  cerr << "[ ";
  for (T i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V> void _print(unordered_map<T, V> v) {
  cerr << "[ ";
  for (auto i : v) {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

int maximum(map<ll, ll> mp) {
  int maxElement = mp.begin()->second;
  for (const auto &pair : mp) {
    if (pair.second > maxElement) {
      maxElement = pair.second;
    }
  }
  return maxElement;
}

int minimum(map<ll, ll> mp) {
  // Iterate through the map to find the minimum element
  int minElement = INT_MAX;
  for (const auto &pair : mp) {
    if (pair.second < minElement) {
      minElement = pair.second;
    }
  }
  return minElement;
}
int main() {
#ifndef ONLINE_JUDGE
  freopen("Error.txt", "w", stderr);
#endif
  test {
    int n;
    cin >> n;
    map<ll, ll> mp;

    bool check = true;
    for (int i = 0; i < n; i++) {
      ll k;
      cin >> k;
      mp[k]++;
    }
    if (mp.size() == 1) {
      cout << "YES" << endl;
      continue;
    }
    if (mp.size() == 2) {
      if (n & 1) {
        int maxElement = maximum(mp);
        int minElement = minimum(mp);
        debug(maxElement);
        debug(minElement);
        if (minElement != maxElement - 1) {
          check = false;
        }
      } else {
        int maxElement = maximum(mp);
        int minElement = minimum(mp);
        if (maxElement != minElement) {
          check = false;
        }
      }
    } else {
      check = false;
    }
    if (check) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
