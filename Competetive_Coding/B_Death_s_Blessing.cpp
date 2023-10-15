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
        ll n;
        cin >> n;
        ll monster[n];
        ll health[n];
        ll time = 0; 
        for(int i = 0; i<n; i++){
            cin >> monster[i];
            time += monster[i];
        }

        for(int i = 0; i<n; i++){
            cin >> health[i];
        }
        sort(health,health+n);
        for(int i = 0; i<n-1; i++){
            time += health[i];
        }
        cout << time << endl;
    }
    return 0;
}