#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string ans = "";
    string res = "";
    for(int i = 0; i<s.size(); i++){
        if(isupper(s[i])){
            s[i] = s[i] - 'A' + 'a';
        }
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y'){
            ans +=  s[i];
        }
    }
    for(int i = 0; i<ans.size(); i++){
        if(i == 0){
            res += '.'; // putting dot on front
        }
        if(i!=0){
            res += '.'; // putting . in middle
        }
        res += ans[i]; //adding char to result

    }
    cout<<res<<endl;
}