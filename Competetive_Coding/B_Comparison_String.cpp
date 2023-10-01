#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt = 1,f = 0,maxi = 1;
        cin>>n;

        string s;
        cin >> s;

        if(s[0] == '<')
           f = 0; 
        else
            f = 1;
        for(int i = 0; i<n; i++){
            if(s[i] == '<'){
                if(f == 0){
                    cnt = 0;
                    f = 1;
                }
                cnt++;
            }else{
                if(f==1){
                    cnt = 0;
                    f = 0;
                }
                cnt++;
            }
            maxi = max(cnt,maxi);
        }
        cout << maxi + 1 << endl;
    }
        
    return 0;
}