#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c;
    int ans = 0;
    while(t--){
        int count = 0;
        cin>>a>>b>>c;
        if(a+b+c >=2){
            count++;
        }
        ans += count;
    }    
    cout<<ans<<endl;
    return 0;
}