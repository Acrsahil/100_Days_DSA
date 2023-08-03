#include <iostream>
using namespace std;


bool recurssion(string s,int i,int n){

    if(i>n-i-1){
        return true;
    }

    if(s[i] != s[n-i-1]){
        return false;
    }else{
       return recurssion(s,++i,n-i-1);
    }

}
int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    int i = 0;
    if(recurssion(s,i,n)){
        cout<<s<<" is palindrome"<<endl;
    }else{
        cout<<s<<" is not plaindrome "<<endl;
    }
    
    return 0;
}