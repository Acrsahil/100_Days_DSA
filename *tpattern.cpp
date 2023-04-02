#include<iostream>
using namespace std;
int main(){
    
    int row = 1;
    
    int n;
    cout<<"Enter the row you want to print: "<<endl;
    cin>>n;
    while(row<=n){
        int j = 1;
        while(j<=row){
            cout<<"*"<<" ";
            j = j+1;
           
        }
        cout <<endl;
        row = row+1;
    }
    
    
}
