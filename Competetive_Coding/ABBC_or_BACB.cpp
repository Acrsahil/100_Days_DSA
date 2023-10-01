#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    int ans = 0;
    bool isA = 0, isB = 0;
    for(int i  = 0; i<s.size(); i++){
        if(s[i] == 'A'){
            isA = 1;
        }    else{
                isB = 1;
            }
    }
    int longestB = 0;
    int len = 0;
    int nrA = 0;
    for(int i = 0; i< s.size(); i++){
        if(s[i] == 'B')
        len++;
        else{
            nrA ++;
            if(len)
            longestB = max(longestB,len);
            len = 0;
        }
    }
    if(len)
    longestB = max(longestB,len);
    int shortestA = 1000000;
    len = 0;
    for(int i = 0; i< s.size(); i++){
        if(s[i] == 'A')
        len++;
    else{
        if(len)
        shortestA = min(shortestA,len);
        len = 0;
    }
    }
    if(len)
    shortestA = min(shortestA,len);
    if(longestB>=2 || s[0] == 'B' || s[s.size()-1] == 'B')

    ans = nrA;
    else
    ans = nrA - shortestA;
    if(isA == 1 && isB == 1){
        cout << ans << endl;
    }else{
        cout << 0 << endl;
    }
    }

    return 0;
}
