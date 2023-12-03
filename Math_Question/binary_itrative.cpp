#include <bits/stdc++.h>
using namespace std;

const long long int M = 1e18 + 7;

long long binarymul(long long a, long long b) {
    long long ans = 0;
    while (b) {
        if (b & 1) {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

long long binaryite(long long a, long long b) {
    long long ans = 1;
    while (b) {
        if (b & 1) {
            ans = binarymul(ans, a);
        }
        a = binarymul(a, a);
        b >>= 1;
    }
    return ans;
}

int main() {
    cout << binaryite(2LL, 100LL) << endl;
    return 0;
}
