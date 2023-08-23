#include <iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.size();

    int st = s[0] - '0';
    if(st == 9){
        s[0] = '9';
    }
    else if(st >=5 ){
        s[0] = (9 - st) + '0'; 
    }

    for(int i = 1; i<n; i++){
        int a = s[i] - '0';
        if(a < 5 || a==0){
            continue;
        }else{
            s[i] = (9 - a) + '0';
        }
    }
    cout<<s<<endl;


    return 0;
}