#include<iostream>
#include<string>
using namespace std;
char getmaxi(string s){
    int arr[26] = {0};
    
    // create an array of count if characters
    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        // lowercase
        int n = 0;
        if(ch >= 'a' && ch <= 'z'){
             n = ch-'a'; // n will give the number of the character where it is map
        }
        else{
            n = ch-'A'; // n will give the number of the character where it is map
        }
        arr[n]++;
    }
    // find the maximum character
    int maxi = -1,ans = 0;
    for(int i = 0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
        char finalAns = 'a'+ans;
        return finalAns;
}

int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<getmaxi(s)<<endl;
    

  

}