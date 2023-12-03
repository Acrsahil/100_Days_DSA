#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int>v,int n,int x){
    int i = 0;
    int j = n-1;
    while(i<j){
        if(v[i]+v[j] == x){
            return true;
        }else if(v[i]+v[j] > x){
            j--;
        }else{
            i++;
        }
    }
    return false;
}
int main()
{
    vector<int> v = {1,2,3,4,5};
    int x = 6;
    if(solve(v,v.size(),12)){
        cout << "Yes " << endl;
    }else{
        cout << "NO" << endl;
    }
    
    return 0;
}