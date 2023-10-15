#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long
int gcd(int a, int b){
    if(a%b == 0){
        return b;
    }else{
        return gcd(a,a%b);
    }
}
int main()
{
    test{
        ll n;
        cin >> n;
        ll s[n];
        for(int i = 0; i<n; i++){
            cin >> s[i];
        }
        ll g = s[0];
        for(int i = 1; i<n; i++){
            g = gcd(s[i],g);
            cout << g << endl;
        }
        cout << s[n-1]/g << endl;
    }

    
    return 0;
}