#include <bits/stdc++.h>
using namespace std;
void solve(string output, int index, vector<string> &ans, string str) {
    if (index >= str.length()) {
		if(output.length()>0){
			ans.push_back(output);

		}
		return;
    }

    // exclude
    solve(output, index + 1, ans, str);

    // include
    output.push_back(str[index]);
    solve(output, index + 1, ans, str);

    // backtrack to restore the original 'output'
}

vector<string> subsequences(string str) {
    vector<string> ans;
    int index = 0;
    string output = "";
    solve(output, index, ans, str);
    return ans;
}


int main()
{
    string s = "123";
    vector<string>ans = subsequences(s);
    for(auto i : ans){
        cout<<i<<endl;
    }
    return 0;
}