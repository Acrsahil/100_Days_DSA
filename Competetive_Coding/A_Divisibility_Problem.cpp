#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long int a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        long long int nextmul;
        if(a%b==0){
            cout<<0<<endl;
        }else{
            nextmul = (a/b+1)*b;
        cout<<nextmul -a <<endl;
        }
    }
    return 0;
}