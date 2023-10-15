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
        int pos  = -1;
        for(int i = 1; i<=n-2; i++){
            if(s[i] == 'a'){
                pos = i;
            }
        }
        if(pos != -1){
        cout << s.substr(0,pos) << " " << s[pos] << " " << s.substr(pos+1,n-1) << endl;
        }else{
            cout << s[0]<< " " << s.substr(1,n-2) << " " << s[n-1] << endl;
        }
    }
    return 0;
}