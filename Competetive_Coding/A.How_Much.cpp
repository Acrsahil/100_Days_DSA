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
        int n,k,a;
        cin >> n >> k;
        int arr[n];
        map<int,int> mp;
        int maxi = 0;
        bool present = 0;
        F(i,n){
            cin >> arr[i];
        }
        F(i,n){
            mp[arr[i]]++;
        }
        for(auto i : mp){
            if(i.first == k){
                present = 1;
                break;
            }
        }
        if(present){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

        


    }
    return 0;
}