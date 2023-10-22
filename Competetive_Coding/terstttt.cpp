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
int main()
{
#ifndef ONLINE_JUDGE
     freopen("Error.txt" , "w",stderr);
#endif

    char c = 'a';
    cout << char(c & '_') << endl; // -> & and gate
    int a; cin >> a;

    if(a&1){
        cout << "odd" << endl;
    }else{
        cout << "Even" << endl;
    }
    
    

    // % -> time more
    return 0;
}