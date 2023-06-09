#include<iostream>
#include<vector>
using namespace std;

vector<int> factorial(int n,int m){
    vector<int>ans;
    long long fact = 1;
    for(int i = 1;i<=n;i++){
        fact = (fact*i)%m;
        ans.push_back(fact);

    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int m = 2;
    vector<int> ans = factorial(n,m);
    for(int i : ans){
        cout<<i<<" ";
    }


    return 0;
}