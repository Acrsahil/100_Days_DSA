#include<iostream>
using namespace std;

int main(){
for(int i = 0;i<=25;i+=2){
    cout<<i<<" ";


    if(i&1){
        continue;
    }
    i++;
}
    return 0;
}