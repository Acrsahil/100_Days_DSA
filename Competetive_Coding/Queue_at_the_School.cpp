#include <iostream>
using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;
    int count = 0;

    for(int i = 0; i<t; i++){
        for(int j = 0; j<n-1; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                swap(s[j],s[j+1]);
                j++; //skip the next character
            }
        }
    }
    cout<<s<<endl;
    return 0;
}