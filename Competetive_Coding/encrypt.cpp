#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> vec;
        char c = s[0];
       for (int i = 1; i < n ; i++) {
    if (s[i] == c) {
        vec.push_back(c);
        c = s[i + 1];
        i++;
    }
}
        for (auto i : vec) {
            cout << i;
        }
    cout<<endl;
    }

    return 0;
}