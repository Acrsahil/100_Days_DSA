#include <iostream>
using namespace std;

int main()
{
    int k,r;
    cin>>k>>r;
    int i = 2, count = 1,value = k;
    while(true){
        if(value%10 == 0){
            cout<<count<<endl;
            break;
        }
        if(value%10 == r){
            cout<<count<< endl;
            break;
        }
        value = k * i; // 2 showels 3 showels
        count++;
        i++;

    }
    return 0;
}