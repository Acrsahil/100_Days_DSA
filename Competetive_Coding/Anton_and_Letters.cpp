#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    set<char>st;

    for(int i = 0; i<s.size(); i++){
        if(isalpha(s[i])){
            st.insert(s[i]);
        }else if(s[i] == ',' || s[i] == ' '){
            continue;
        }
    }
    cout<<st.size()<<endl;
    return 0;
}