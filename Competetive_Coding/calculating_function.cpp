#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    long long int ans;
    if(n%2 == 1){
        ans = (n+1)/2 *-1;
    }else{
        ans = n/2;
    }
    cout<<ans<<endl;
    return 0;
}