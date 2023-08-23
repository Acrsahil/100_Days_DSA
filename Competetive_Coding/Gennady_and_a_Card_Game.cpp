#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> tb(1); // Allocate space for one element
    vector<string> hd(5);
    bool check = 0;
    cin >> tb[0]; // Read input into the first element
    
    for(int i = 0; i<5; i++){
        cin>>hd[i];
        if(tb[0][0] == hd[i][0] || tb[0][1] == hd[i][1]){
            check = 1;
            break;
        }
    }
    if(check){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }



    return 0;
}
