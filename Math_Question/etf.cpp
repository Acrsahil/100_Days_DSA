#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int count = 0;

    for(int i = 0; i<=n; i++){
        if(__gcd(i,n) == 1 ){
            cout << i << endl;
            count ++;
        }
    }
    cout << count << endl;
    return 0;
}