#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void countletter(string word,char c){
    map<char,int>let;
    for(int i = 0; i<word.size(); i++){
        let[word[i]]++;
    }
    for(auto it : let){
        if(it.first == c){
            cout<<it.first<<" = "<<it.second<<endl;
        }
    }
}

int main()
{
    int n = 5;
    int arr[5] = {1,1,2,2,3};
    map<int,int>mpp;
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;

    }
    for(auto it : mpp){
        cout<<it.first<<","<<it.second<<endl;
    }

    string word;
    char c;
    getline(cin,word);
    cin>>c;
    countletter(word,c);




    
    return 0;
}


