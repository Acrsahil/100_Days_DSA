#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long

int main()
{
  vector<int> v(5);
  for(int i = 1; i<=5; i++){
    cin >> v[i];
  }
  
  for(auto i : v){
      cout << i << endl;
  }
  return 0;
}