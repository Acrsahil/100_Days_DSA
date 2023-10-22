#include <bits/stdc++.h>
using namespace std;

#define F(i,n) for(int i = 0; i<n; i++)
#define vi vector<int>
#define ln long long int
#define test int t; cin>> t; while(t--)
#define ll long long 

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> "; _print(x); cerr << endl
#else
#define debug(x)
#endif 

void _print(int a){
      cerr << a << " ";
}
void _print(long long a){
      cerr << a << " ";
}
void _print(char a){
      cerr << a << " ";
}
void _print(string a){
      cerr << a << " ";
}
void _print(bool a){
      cerr << a << " ";
}
template<class T> void _print(vector<T> v1){
      cerr << "[ ";
      for(T i : v1){
           _print(i);
          }
      cerr << "]";
}


void solve(int num){
    for(int i = 10; i>=0; i--) {
     cout<< ((num>>i)&1);
    }
    cout << endl;
}
int main()
{
#ifndef ONLINE_JUDGE
      freopen("Error.txt" , "w",stderr);
      
#endif

    int n = 68;
    int num = (n&(~((1<<5)-1)));
    cout << "Original  -> ";
    solve(n);
    cout << "Clear LSB -> ";
    solve(num);
     int ans (1<<5); 
     return 0;
}