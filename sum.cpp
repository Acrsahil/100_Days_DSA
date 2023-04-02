#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    int i = 2;
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    while(i<=n){
        sum = sum +i;
        i= i+2;
    }
     cout<<"The sum of given loop is "<<sum<<endl;
    return 0;
}