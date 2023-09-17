#include <iostream>
using namespace std;
void solve(){
    long long int a,b,c;
    cin>>a>>b>>c;

    if(a<c){
        cout<<1<<" ";
    }else{
        cout<<-1<<" ";
    }
    if(a*b>c){ // multiplying qty 
        cout<<b;
    }else{
        cout<<-1;
    }
    cout<<endl;

}
int main()
{
    long long int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}