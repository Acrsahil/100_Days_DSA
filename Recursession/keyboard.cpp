#include <bits/stdc++.h>
using namespace std;

void solve(vector<string> &ans,string output,string mapping[],int index,string digits){
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }
    int number = digits[index] - '0';
    string value = mapping[number];

    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(ans,output,mapping,index+1,digits);
        output.pop_back();
    }
}
vector<string> combo(string digits){
    vector <string> ans;
    if(digits.length()==0){
        return ans;
    }
    string output;
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","uvw","xyz"};
    int index = 0;
    solve(ans,output,mapping,index,digits);
    return ans;
}

int main()
{
    string digits = "23";
    vector<string> ans = combo(digits);
    for(auto i : ans){
        cout<<i<<endl;
    }

}