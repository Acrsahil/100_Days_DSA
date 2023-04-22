#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){

        // first triangle
        int sp = n - i;
        while(sp){
            cout<<" ";
            sp = sp-1;
        }

        // Second Triangle
        int j =1;
        while(j<=i){
            cout<<j;
            j = j+1;
        }

       // Third Triangle
       int start = i - 1;
       while(start){
        cout<<start;
        start = start - 1;
       }

        cout<<endl;
        i = i+1;
    }
    return 0;
}