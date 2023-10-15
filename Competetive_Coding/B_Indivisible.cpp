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
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        if(n&1){
            cout << -1 << endl;
        }else{
            vector<int> odd;
            vector<int> even;
            vector<int> ans;   
            for(int i = 1; i<=n; i++){
                if((i&1)){
                    odd.push_back(i);
                }else{
                    even.push_back(i);
                }
            }
            for(int i = 0; i<even.size(); i++){
                // even first to avoid the division of dight count (make the permutation not divisible by dights count)
                // if we make odd first it it will be easily divisible by the range (l-r+1)
                cout << even[i] << " ";
                cout << odd[i] << " ";
             }cout << endl; 
        }

    }
    return 0;
}