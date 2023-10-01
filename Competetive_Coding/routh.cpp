#include <iostream>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while(t--){
       ll a,b,c;
       cin >> a >> b >> c;
       ll hf = abs(a-b);

       ll rem = hf/2;
       ll ans = (rem+c-1)/c;

       if(ans*c == rem && hf%2 != 0){
        ans++;
       }
       cout << ans << endl;
    }
    return 0;
}
