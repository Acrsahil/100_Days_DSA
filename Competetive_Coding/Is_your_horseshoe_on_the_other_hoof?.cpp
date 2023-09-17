#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int k;
    set<int>s;
    while(n--){
        cin>>k;
        s.insert(k);
    }
    cout<<4-s.size()<<endl;
    return 0;
}