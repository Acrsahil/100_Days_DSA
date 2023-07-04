#include<iostream>
#include <bits/stdc++.h>
using namespace std;
  string interpret(string command) {
        string str;
        for(int i = 0;i<command.size(); i++){
            if(command[i] == 'G'){
                str.push_back('G');
            }
            if(command[i] == '(' && command[i+1] == ')'){
                str.push_back('o');
            }
            if(command[i]== '(' &&  command[i+1] == 'a' && command[i+1+1] == 'l' && command[i+1+1+1] == ')'){
                str.push_back('a');
                str.push_back('l');
                
            }
        }

        return str;
        
        
    }

int main()
{

    string command;
    getline(cin,command);
    cout<<interpret(command)<<endl;
    return 0;
}