#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int count = 0;

    while(a!=b){
        if(a>b){
            a=a-c;
            b=b+c;
            count++;
        }else{
            b = b-c;
            a = a+c;
            count ++;
        }
    }
    cout<<count<<endl;
    return 0;
}