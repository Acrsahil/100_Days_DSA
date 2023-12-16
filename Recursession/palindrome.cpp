#include <bits/stdc++.h>
using namespace std;


bool ispalindrome(string st,int start,int end){
    cout << "start "<< start << " end " << end<< endl;
    if(start==end){
        return true;
    }
    if(st[start] == st[end]){
     return ispalindrome(st,start+1,end-1);
    }
    return false;
} 
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    if(ispalindrome(s,0,s.size()-1)){
        cout << s << " is a palindrome string "<< endl;
    }else{
        cout << s << " is not a palindrome string "<< endl;
    }
    
    return 0;
}
