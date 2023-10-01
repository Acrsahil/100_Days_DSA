#include <iostream>
using namespace std;
int solve(int a, int b, int c){
   if(b >= a && c >= a) {
    return min(b-a,c-a);
   }
   if(c <= a && b <= a){
    return min(a-b , a-c);
   }
   return 0;
}
int main()
{
    int t;
    cin>> t;
    while(t--){
        int xa,ya;
        cin>> xa >> ya;

        int xb, yb;
        cin >> xb >> yb;

        int xc , yc;
        cin >> xc >> yc;


        int ans = solve(xa, xb, xc) + solve(ya, yb, yc);
        ans++;
        cout<< ans << endl;    
    }
    return 0;
}