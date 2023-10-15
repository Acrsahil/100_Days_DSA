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
        int n,i,j,ans;
        cin >> n;
        
        i = 2;
        j = 3*n;

        cout << ((n+1)>>1) << endl;
        while(i<j){
            cout << i << " " << j <<endl;
            i += 3;
            j -= 3;
        }

    }
    return 0;
}