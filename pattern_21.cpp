#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = n;
    while(i>=1){
        // int j = n;
        // while(j>=i){
        //     cout<<j;
        //     j = j - 1;
        // }

        //  int sp = 1;
        // while(sp<=i){
        //     cout<<" ";
        //     sp = sp+1;
        // }

        int k = 1;
        while(k<=i){
            cout<<k;
            k = k+1;
        }
        cout<<endl;
        i = i-1;
    }


    return 0;
}