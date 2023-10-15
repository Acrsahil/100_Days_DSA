
#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a,a);

}

#define F(i, n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define ln long long int
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define ll long long

int main()
{
    test
    {
        int n;
        cin >> n;
        int num;
        int ans = 0;
       for(int i = 1; i<=n; i++) {
        cin >> num;
        if(abs(num - i)!=0){
            int output = abs(num - i);
           ans = gcd(ans,output);
        }
       }
       cout << ans << endl;
    }

    return 0;
}