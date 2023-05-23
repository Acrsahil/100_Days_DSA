#include<iostream>
#include<string>
using namespace std;
    bool valid(char ch){ // function 1
        if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        return 0;
    }
    char lower(char ch){ // function 2

    char ans;
    if((ch >='a' && ch <= 'z') || (ch >= '0' && ch <= '9')){ // checking wherather the charater is in this range or not
    return ch;
    }else{
         ans = ch - 'A' +'a'; // adding the difference  of the character
    return ans;
    }
    
}
 bool check (string w){ // function 3
    int s = 0;
    int e = w.length()- 1;
    while(s<=e){
        if(w[s]!=w[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;


}
    bool isPalindrome(string s) { // function 4
        // faltu character hatado

        string temp = "";
        for (int j = 0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
     
        }
        // lower case me kardo
        for(int j = 0;j<temp.length();j++){
            temp[j] = lower(temp[j]);
        }
        // check palindrome
        return check(temp);
        
    }



int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);

    if(isPalindrome(name)){
        cout<<name <<" is palindrome"<<endl;
    }
    else{
        cout<<name<<" is not palindrome"<<endl;
    }
    
    
    return 0;
}