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
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> j(n);
        vector<int> g(m);

        F(i,n){
            cin >> j[i];
        }
        for(int i = 0; i<m; i++){
            cin >> g[i];
        }

        sort(j.begin(),j.end());
        sort(g.begin(),g.end());

        if(j[0] < g[m-1]){
            swap(j[0],g[m-1]);
        }
        if(k&1){
           int odd = 0;
           F(i,n) odd += j[i];
           cout << odd << endl;
           continue;
        }
        
        sort(j.begin(),j.end());
        sort(g.begin(),g.end());
                    
        if(g[0] < j[n-1]){
            swap(g[0],j[n-1]);
        }
        if(!(k&1)){
            int even = 0;
            F(i,n) even += j[i];
            cout << even << endl;
            continue;   
        }
    }
    return 0;
}