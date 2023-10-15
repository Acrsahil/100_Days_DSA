#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
    test{
       int n; 
       cin >>n;
       int k = 1;
       while(n--){
        cout << k << " ";
        k += 2;
       } cout << endl;
    }
    return 0;
}