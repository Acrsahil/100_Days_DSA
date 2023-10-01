#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
    long long m = 40000000000 + 7;
    int n = 100;
    long long fac = 1;
    for(int i = 1; i <= n; i++){
       fac = (fac * i) % m; 
    }
    cout << fac << endl;
    return 0;
}
