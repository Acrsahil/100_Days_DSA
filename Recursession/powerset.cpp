#include <iostream>
using namespace std;
void powerset(string s,int n){
    for(int i = 0; i<(1<<n); i++){
    string ans = "";
        for(int j = 0; j<n; j++){
            if(i&(1<<j)){
                ans += s[j];
            }
        }
            cout<<ans<<endl;
    }
}
int main()
{
    string s = "abc";
    int n = 3;
    powerset(s,n);
    return 0;
}