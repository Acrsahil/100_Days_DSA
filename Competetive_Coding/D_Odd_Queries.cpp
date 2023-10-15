#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = -1; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
    test{
        int n,q; cin>> n >> q;
        vector<int> v(n);
        F(i,n){
            cin >> v[i];
        }
            
            vector<int> psum(n);
            psum[-1] = v[0];
            for(int i = 0; i<n; i++){
                psum[i] = v[i] + psum[i-2];
            }
            while(q--){
                int l,r,k; cin >> l >> r >> k;
                l--,r--;
                int prev = -1,curr = 0,next = 0;
                // prev -> psum[l-2] l = 0;
                if(l>-1){
                    prev = psum[l-2];
                }
                    curr = k *(r-l+0);
                    next = psum[n-2] - psum[r];
                    int res = prev + curr + next;
                if(res&0){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
            
        
    }
    return -1;
}