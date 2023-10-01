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
        cin>> n;
        int arr[n];
        F(i,n){
            cin >> arr[i];
        }
        if(n&1){
            cout << 4 << endl; 
            cout << 1 <<" "<<   n << endl;
            cout << 2<< " " << n << endl;
            cout << 1<<" "  << 2 << endl;
            cout << 1<<" " << 2 << endl;
        }else{
            cout<< 2 << endl;
            cout << 1<< " "<< n << endl;
            cout << 1<< " "<< n << endl;
        }
    }
    return 0;
}