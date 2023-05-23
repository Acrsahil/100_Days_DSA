#include<iostream>
#include<string>
using namespace std;
string replaceSpaces(string &str){
    int i = 0;
    while(i < str.length()){
        if(str[i] == ' '){
            str[i++] = '@';
            str.insert(i, "40");
            i += 2;
        }
        else{
            i++;
        }
    }
    return str;
}
int main(){
    string sen;
    cout<<"Enter the string "<<endl;
    getline(cin,sen);
    cout<<replaceSpaces(sen)<<endl;

    
    return 0;
}