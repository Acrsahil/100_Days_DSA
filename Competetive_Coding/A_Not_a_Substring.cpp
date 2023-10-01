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
        string s;
        cin >> s;

        int n = s.size();

        if (s == "()")
        {
            cout << "NO" << endl;
            continue;
        }
        bool c = 0;
        for(int i = 0; i<n-1; i++)
        {
            if (s[i] == '(' && s[i+1] == '(' || s[i] == ')' && s[i+1] == ')')
            {
                c = 1;
            }
        }
        string ans = "";
        if(c){
            for(int i = 0; i<n; i++){
                ans += "()";
            }
        }else{
            for(int i = 0; i<n; i++) ans += '(';
            for(int i = 0; i<n; i++) ans += ')';
        }
        cout << "YES" << endl;
        cout << ans << endl;
    }
    return 0;
}