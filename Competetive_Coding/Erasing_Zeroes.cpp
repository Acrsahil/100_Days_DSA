#include <iostream>
using namespace std;

void debug(int n){
    cout<<n<<endl;
}

int main()
{
    int t;
    cin>>t;
    string s;
    int count = 0;
    while(t--){
        cin>>s;
        int i = 0;
        while(i<s.size()){
            if(s[i] == '0'){
                i++;
            if(s[i] == '1' ){
                i++;
                if(s[i+1] == '0'){
                    count ++;
                }
                i++;
            }
            }else{
                i++;
            }

        }
        cout<<count<<endl;

    }
    return 0;
}