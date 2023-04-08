#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<" ";
            j++;
        }
        int st = n;
        while(st>=i){
            cout<<"*";
            st = st-1;
        }
        cout<<endl;
        i++;
    }
    return 0;
}