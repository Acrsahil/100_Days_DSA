#include <bits/stdc++.h>
using namespace std;

// void debug(int n){
//     cout<<n<<endl;
// }

int main()
{
    int t;
    cin>>t;
    string s;
    vector<int> res;
    while(t--){
        cin>>s;
        int prev = -1;
    int count = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '1'){
                if(prev != -1){
                    count += (i-prev-1);
                }
                prev = i;
            }
        }
        
        res.push_back(count);
}
for(auto i : res){
    cout<<i<<endl;
}
    return 0;
}