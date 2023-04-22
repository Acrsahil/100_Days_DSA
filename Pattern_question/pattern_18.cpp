#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int sp = 1;
        while(sp<=row){
            cout<<" ";
            sp = sp+1;
        }
        int col = row;
        while(col<=n){
            cout<<col;
            col = col + 1;
        }
        cout<<endl;
        row = row+1;
    }
    return 0;
}