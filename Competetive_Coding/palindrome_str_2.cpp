#include <iostream>
using namespace std;

int main()
{

    
    // different variable method
    string st;
    getline(cin,st);
    int n = st.size();

    string str_rev;
    for(int i = n-1; i>=0; i--){
        str_rev.push_back(st[i]);
    }
    if(str_rev == st){
        cout << "string is palindrome" <<endl;
    }
    else{
        cout << "string is not palindrome" <<endl;
    }
    

    return 0;
}