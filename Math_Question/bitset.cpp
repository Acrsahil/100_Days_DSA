#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
    int a = 9;
    int i = 0;
    if((a&(1<<i)) != 0){
        cout<< "set bit" << endl;
        cout << (a & (1<<i)) << endl;
    }
    else{
        cout << "not set bit" << endl;
    }
    cout << (2<<4) << endl;
    return 0;
}