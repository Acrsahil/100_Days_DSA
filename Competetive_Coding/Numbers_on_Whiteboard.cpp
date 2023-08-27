#include <iostream>
using namespace std;
void solve(int n){
   int a = n,b = n-1;
   cout<<2<<endl;
   for(int i = 1; i<n; i++){
    cout<<a<<" "<<b<<endl;
    a = (a+b+1)/2;
    b--;
   }
}
int main()
{
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
    return 0;
}