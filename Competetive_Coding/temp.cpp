#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
    for(int i = 1; i<=50; i++){
        for(int j = 1; j<=50; j++){
            if((i^j)*2 == i+j){
                cout << i <<" " << j << endl;
            }
        }
    }
    cout << char('A' | ' ')<< endl;
    return 0;
}