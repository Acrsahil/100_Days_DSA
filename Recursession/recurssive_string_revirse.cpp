#include <iostream>
using namespace std;


void revstr(string& str,int s,int n){
    if(s>n-s-1){
        return ;
    }
    // cout<<str<<endl;
    swap(str[s++],str[n-s-1]);
    revstr(str,s,n);
}
int main()
{
    string str;
    getline(cin,str);
    int s = 0;
    int n = str.size();


    revstr(str,s,n);
    cout<<"reverse string :"<<str<<endl;
    return 0;
}