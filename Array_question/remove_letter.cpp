#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

string rem(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (st.empty() || s[i] != st.top()) {
            st.push(s[i]);
        } else {
            st.pop();
        }
    }
    
    string ans = "";
    while (!st.empty()) {
        char ele = st.top();
        st.pop();
        ans += ele;
    }
    
    reverse(ans.begin(), ans.end()); // Reverse the string using the reverse function

    return ans;
}

int main() {
    string s = "abbaca";
    cout << rem(s) << endl;

    return 0;
}
