#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string str = "";
    int count = 0;

    char s[n];
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }
    for(int i = 0; i<n; i++){
        str += s[i];
        count ++;
        i+=count;
    }
    cout<<str<<endl;




    return 0;
}