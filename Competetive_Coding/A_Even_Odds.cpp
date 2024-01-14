#include <iostream>
 
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;

    long long mid = (n+1)/2;
    if (k <= mid) {
        // k corresponds to an odd position
        cout << 2 * k - 1 << endl;
    } else {
        // k corresponds to an even position
        cout << 2 * (k - mid) << endl;
    }
    return 0;
}
