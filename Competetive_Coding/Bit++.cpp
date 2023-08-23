#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int n;
    char s[4];
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>s;
        if(s[1]=='+'){
            x++;
        }else{
            x--;
        }
    }

    cout<<x<<endl;
    return 0;
}