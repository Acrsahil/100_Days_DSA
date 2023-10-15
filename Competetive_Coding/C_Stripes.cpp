#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        vector<vector<char>> p(8,vector<char>(8,'.'));
        for (long long i = 0; i < 8; i++) {
            for (long long j = 0; j < 8; j++) {
                cin >> p[i][j];
            }
        }
        bool done = false;
        // check all row
        for (long long i = 0; i < 8; i++) {
            bool flag = true;
            for (long long j = 0; j < 8; j++) {
                if (p[i][j] != 'R') {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                done = true;
                cout << "R" << endl;
                break;
            }
        }
        if (!done) {
            for (long long i = 0; i < 8; i++) {
                bool flag = true;
                for (long long j = 0; j < 8; j++) {
                    if (p[j][i] != 'B') {
                        flag = false;
                        break;
                    }
                }
                if (flag) {
                    done = true;
                    cout << "B" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
