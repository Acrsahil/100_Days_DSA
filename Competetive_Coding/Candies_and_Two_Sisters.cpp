#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;
    int ans = 0;
    while(t--){
        cin>>n;
        if(n&1){
            ans = n/2;
        }else{
            ans = n/2-1;
        }
    cout<<ans<<endl;
    }
    return 0;
}