#include <bits/stdc++.h>
using namespace std;
void longestCommonPrefix(vector<string>& strs) {
        for(int i = 0; i<strs.size()-1; i++){
             string element= strs[i];
            for(int j = 0; j<element.size(); j++){
               cout<<strs[2]<<endl;
            }cout<<endl;
        }
        
    }
int main()
{
    vector<string>s = {"sahil","sakhira","samir"};
    longestCommonPrefix(s);

    return 0;
}