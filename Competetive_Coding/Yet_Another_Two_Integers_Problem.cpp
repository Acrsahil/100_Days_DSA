#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int a,b;
    while(t--){
        cin>>a>>b;
        long long int count = 0;
        long long int ans = 0;
        if(a>b){
             count = a-b;
             if(count%10){
                ans = (count/10)+1;
             }else{
                ans = count/10;
             }
       }else if(b>a){
            count = b-a;
             if(count%10){
                ans = (count/10)+1;
             }else{
                ans = count/10;
             }
        }
        cout<<ans<<endl;
}
}