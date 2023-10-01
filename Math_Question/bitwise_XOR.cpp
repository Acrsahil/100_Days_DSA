#include <bits/stdc++.h>
using namespace std;

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
        int n;
        cin >> n;
        int arr[n];
        F(i,n){
            cin >> arr[i];
        }
        int ans = 0;
        F(i, n)
        {
             ans ^= arr[i];
        }
        cout<< ans << endl;

        return 0;
}