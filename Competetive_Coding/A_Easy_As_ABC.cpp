#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <queue>
#include <stack>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <iomanip>
#include <list>
#include <cassert>
#include <climits> //!
#include <cfloat>
#include <random>
#include <chrono>

#include <type_traits>

using namespace std;

#define int long long
#define all(v) begin(v), end(v)
#define pb push_back
#define rep(k, n) for(int k = 0; k < (n); k++)

using ll = long long;
using ull = unsigned long long;

template<class T>
using ve = vector<T>;
using vi = ve<int>;

using pii = pair<int, int>;

const double pi = atan(1) * 4;

void fast() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cout << fixed; cout.precision(10);
}

void precalc() {}

void solve() {
	ve<string> s(3);
	for (auto& i : s)
		cin >> i;
	ve<pii> p;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			p.push_back({ i, j });
	string ans = "ZZZ";
	for (auto& a : p) {
		for (auto& b : p) {
			for (auto& c : p) {
				if (a != b && b != c && a != c &&
					max(abs(a.first - b.first), abs(a.second - b.second)) == 1 &&
					max(abs(c.first - b.first), abs(c.second - b.second)) == 1) {
					string t;
					t += s[a.first][a.second];
					t += s[b.first][b.second];
					t += s[c.first][c.second];
					ans = min(ans, t);
				}
			}
		}
	}
	cout << ans << "\n";
}

signed main() {
#ifdef LOCAL
	freopen("local.in", "r", stdin);
	freopen("local.out", "w", stdout);
	using clock = chrono::system_clock;
	auto start_time = clock::now();
#endif // LOCAL
	fast();
	precalc();
	int T = 1;
	//cin >> T;
	while (T--)
		solve();
#ifdef LOCAL
	cout << "\n";
	auto end_time = clock::now();
	cout << "time: " << chrono::duration_cast<chrono::milliseconds>(end_time - start_time).count() << "ms\n";
#endif // LOCAL
	return 0;
}
