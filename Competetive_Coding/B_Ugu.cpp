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

                test
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ans = 0;
        int f = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])

            {
                if(f==0 && s[i] == '0'){
                    f= 1;
                    ans++;
                }else if(f==1){
                    ans++;
                }
            }
        }
    cout << ans <<endl;

    }
    vector<ll> v = {1,2,3,4,5};
    debug(v);
    char l = 's';
    debug(l);
    return 0;
}