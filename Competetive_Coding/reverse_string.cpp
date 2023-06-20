#include <iostream>
using namespace std;

int main()
{
    string st;
    getline(cin,st);
    int n = st.size();

    // tradational method
    // for(int i = 0; i<n/2; i++){
    //     char temp = st[i];
    //    st[i] = st[n-i-1];
    //    st[n-i-1] = temp;
    // }
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

    // modern methon
//     string str_rev;
//     for(int i = n-1; i>=0; i--){
//         str_rev.push_back(st[i]);
//     }
//     if(str_rev == st){
//         cout << "string is palindrome" <<endl;
//     }
//     else{
//         cout << "string is not palindrome" <<endl;
//     }
    

//     return 0;
}