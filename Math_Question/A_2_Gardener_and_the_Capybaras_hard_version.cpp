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
        string s,a,b,c;
        cin >> s;
        ll n = s.size();
        if(s[0] == s[n-1]){
            a = s[0];
            c = s[n-1];
            b = "";
            for(int i = 1; i<n-1; i++){
                b += s[i];

            }
            cout << a << " " << b << " " << c << endl;
        }else{
            if(s[0] == s[1]){
                a = s[0];
                b = s[1];

                c = "";
                for(int i = 2; i<n; i++){
                    c += s[i];
                }
            }else{
                if(s[0] == 'a'){
                    a = s[0];
                    c = s[n-1];

                    b = "";
                    for(int i = 1; i<n-1; i++){
                        b += s[i];
                    }
                }else{
                    a = s[0];
                    b = s[1];
                    c = "";
                    for(int i = 2; i<n; i++){
                        c += s[i];
                    }
                }
            }
            cout <<  a << " " << b << " " << c <<endl;
        }
    }
    return 0;
}