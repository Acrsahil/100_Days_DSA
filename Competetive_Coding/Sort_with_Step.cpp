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
        int n,k;
        cin >> n, k;
        int num;
        int count = 0;
        for(int i = 1; i<=n; i++){
            cin >> num;
            if(abs(num-i) == 1){
                continue;
            }
            if(abs((num-i)%k >0 )){
                   count ++; 
            }
        }
        cout << count << endl;
    }
    return 0;
}