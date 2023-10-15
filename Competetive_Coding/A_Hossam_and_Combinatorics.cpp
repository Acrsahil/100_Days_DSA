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
        

        int maxi = INT_MIN;
        int mini = INT_MAX;
        map<int,int> mp;
        for(int i = 0; i<n; i++){
            int num;
            cin >> num;
            mp[num]++;
        }
           ll mxcnt = -1;
           ll micnt = -1; 
        for(auto i : mp){
            if(i.first<mini){
               mini = i.first; 
               micnt = i.second;
            }
            if(i.first > maxi){
                maxi = i.first;
                mxcnt = i.second;
            }
        }
       if(maxi == mini){ // or if(mp.size() == 1) ->> if there is same element then it will   store the count on that element only so size will become 1 
        cout << n * (n-1ll) << endl; // n-1 -> because itself will be not consider
       }else{
        cout <<  micnt * mxcnt * 2 << endl; // creating pair 
       }
        
        }
    return 0;
}