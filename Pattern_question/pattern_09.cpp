#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        
        int j = 1;
        while(j<=n){
            char st = 'A';
            char ch = st+j-1;
            cout<<ch;
            j = j+1;
            st = st+1;
        }
    }
    return 0;
}