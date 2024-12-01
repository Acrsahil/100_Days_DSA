#include <iostream>
using namespace std;



int main() {
    int t;
    cin >> t;   
    
    while (t--) {
        int n, k;
        cin >> n >> k;

    int start = n-k+1;
    int end = n;


    if (((n+1)/2-(start)/2) % 2 == 1) cout << "NO" << endl;
    else cout << "YES" << endl;

        
    }
    
    return 0;
}
