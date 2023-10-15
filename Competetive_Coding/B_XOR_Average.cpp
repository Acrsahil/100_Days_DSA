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
        int n; cin >> n;
        if(n&1){
            for(int i = 0; i<n; i++ ){
                cout << 2<< " " ;
            }cout << endl;
        }else{
           for(int i = 0; i<n-2; i++) {
            cout << 2 << " ";
           }
           cout << "3 1" << endl;
        }
    }
    return 0;
}