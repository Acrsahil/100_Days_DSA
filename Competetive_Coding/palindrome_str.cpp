#include <iostream>
using namespace std;

int main()
{
    string st;
    getline(cin,st);
    int n = st.size();

    // same string method
        bool palindrome = false;
    for(int i = 0; i<n/2; i++){
        char temp = st[i];
       if(st[i] == st[n-i-1]){
        palindrome = true;
       }
    }
    if(palindrome){
        cout<< st << "is a palindrome"<<endl;
    }else{
        cout<< st << "is not a palindrome" <<endl;
    }

}
