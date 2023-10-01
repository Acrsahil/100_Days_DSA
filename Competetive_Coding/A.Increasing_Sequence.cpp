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

   int n,cnt = 1, b;
   cin >> n;
   F(i,n) {
    cin>> b;
    if(b == cnt){
        cnt++;
    }
    cnt++;
   }
   cout << cnt-1 << endl;
    }
}