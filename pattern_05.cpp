#include<iostream>
using namespace std;
int main(){
    
    int row = 1;
    int count = 1;
    int n;
    cout<<"Enter the row you want to print: "<<endl;
    cin>>n;
    while(row<=n){
        int column = 1;
        while(column<=row){
            cout<<count<<" ";
            count = count +1;
            column = column+1;
           
        }
        cout <<endl;
        row = row+1;
    }
    
    
}