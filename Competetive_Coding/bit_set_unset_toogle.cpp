#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long
void printbinary(int x){
    for(int i = 4; i>=0; i--){
         cout << ((x >> i) & 1);
    }
    cout << endl;
}
int main()
{
    int a = 5;
   for(int i = 0; i<6; i++) {
   printbinary(5);
   cout<< (a&(1<<i)) << endl;
   }
    return 0;
}