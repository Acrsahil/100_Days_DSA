#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int row = -n; row<=n; row++){
        int spaces = 2 * abs(row);
        // printing spaces
        for(int i = 0; i<spaces; i++){
            cout<<" ";
        }
        int max = n - abs(row);
        // incresing order
        for(int i = 0; i<max; i++){
            cout<<i<<" ";
        }
        //decresing order
        for(int i = max; i>0; i--){
            cout<<i<<" ";
        }
        cout<<0<<endl;
    }
    return 0;
}