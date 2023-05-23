#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string rev(string s){
    int st = 0;
    int e = 0;
    while(st<s.size()){
        while(e<s.size() && s[e] != ' '){ 
            e ++;
        }
        reverse(s.begin()+st,s.begin()+e);
        cout<<e<<endl;
        st = e+1;
        e = st;

    }
        return s;
}

int main(){
    string s;
    cout<<"Enter the string ";
    getline(cin,s);
    string str = rev(s);
    cout<<str<<endl;
    
    return 0;
}