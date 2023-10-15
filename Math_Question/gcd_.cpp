#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long
int gcd(int a, int b){
   if(b%a == 0 ) return a;
    return gcd(b%a,a);
}
int main()
{
       int a = 1,b = 2;     
       cout << gcd(a,b) << endl; // used to find the GCD using Lucrin Algorethem
       cout << a*b /(gcd(a,b)) << endl; // used to find the LCM of the given number a and b
       cout << (a/gcd(a,b)); 
       cout << '/' <<(b/gcd(a,b)) <<endl; // used to find the minimum fraction of the a and b
    return 0;
}