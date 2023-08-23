#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int tram = 0;
    int maxi;
    for( int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
        
    }
    for( int i = 0; i<n; i++){
        tram = tram + b[i];
        maxi = max(maxi,tram);
        tram = tram - a[i+1];
    }
    cout<<maxi<<endl;
    return 0;
}