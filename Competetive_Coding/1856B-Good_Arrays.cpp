#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--) {
    int n;
    cin>>n;

    vector<int>v(n);

    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    if(n == 1){
        cout<< "NO" << endl;
        continue;
    }

    long long int sum = 0;
    int count = 0;

    for(auto i : v){
       count +=i == 1;
       sum += i;
       }
    sum -= n;
    if(sum >= count){
        cout<< "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    }
   
    return 0;
}