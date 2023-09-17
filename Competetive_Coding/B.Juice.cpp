#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int cock[n];
    long double  ans = 0;
    long double total = 0;

    for(int i = 0; i<n; i++){
        cin>>cock[i];
        total += cock[i];
    }
    ans = total / n;
    cout<<ans<<endl;


    return 0;
}