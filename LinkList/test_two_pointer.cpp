#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3};
    vector<int> e = {2, 4, 6, 8, 10};

    vector<int> ans;
    int i = 0;
    int j = 0;

    while (i < v.size() || j < e.size()) {
        if (i < v.size() && (j == e.size() || v[i] <= e[j])) {
            ans.push_back(v[i]);
            i++;
        } else {
            ans.push_back(e[j]);
            j++;
        }
    }

    for (auto i : ans) {
        cout << i << endl;
    }

    return 0;
}
