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
        int zero = 0;

        F(i,n){
            cin >> v[i];
            if(v[i] == 0){
                zero++;
            }
        }
        sort(v.begin(),v.end());
        if(zero <= (n+1)/2){ // zero count is less than the half of the array which means zero can be change to others numbers 
            cout << 0 << endl; // zero is absent in the array so ans is -> 0
        }else if(v[n-1] != 1){ // if last element is not 1 that means 1 can be changed abset -> 1
            cout << 1 << endl; 
        }else{ // if there is no less zero and last element is 1 than 2 will be the answer
            cout << 2 << endl;
        }

    }
    return 0;
}