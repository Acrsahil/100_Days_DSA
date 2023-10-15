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
        int n, k;

        cin >> n >> k;
        int count = 0; 
        F(i,n){
            int temp; 
            cin >> temp;
            if(temp == count+1){
                count++;
            }
        }
    cout << (n-count+k-1)/k << endl;
    }
    return 0;
}