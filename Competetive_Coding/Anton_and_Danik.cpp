#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    int countA= 0;
    int countB= 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'A'){
            countA++;
        }
        if(s[i] == 'D'){
            countB++;
        }
    }
    if(countA>countB){
        cout<<"Anton"<<endl;
    }else if(countB>countA){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}