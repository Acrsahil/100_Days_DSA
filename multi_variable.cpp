#include<iostream>
using namespace std;

int main(){
    for(int i=1,j=10,c=5;i<=10 && j>=5 && c>=1;i++,j--,c--){
        cout<< i <<" "<<j<<" "<<c<<endl;
    }
    return 0;
}