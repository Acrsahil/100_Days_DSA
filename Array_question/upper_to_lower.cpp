#include<iostream>
using namespace std;
char lower(char ch){

    char ans;
    if(ch >='A' && ch <= 'Z'){
    ans = ch - 'A' +'a';
    return ans;
    }
    else{
        return ch;
    }
    
}

int main(){
    char car;
    cin>>car;
    cout<<lower(car)<<endl;

    return 0;
}