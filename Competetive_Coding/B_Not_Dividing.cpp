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
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        for(int i = 0; i<n; i++){
            if(v[i]== 1){
                v[i]++;
            }
        }
        for(int i = 1; i<n; i++){
            if(v[i] % v[i-1] == 0){
                v[i]++;
            }
        }
        for(int i = 0; i<n; i++){
            cout << v[i] << " ";
        }cout << endl;
    }
    return 0;
}