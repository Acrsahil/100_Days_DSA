#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int count = 0;
    int ans = 0;
    while(a!=0 && b!=0){
        a--;
        b--;
        count++;
    }
    if(a!=0){
        ans = a/2;
    }else if(b!=0){
        ans = b/2;
    }
    cout<<count<<" "<<ans<<endl;
    return 0;
}