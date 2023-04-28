#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int n;
    bool x = false;
    cout<<"Enter the number to check: ";
    cin>>n;
    for(int i = 0; i<=30;i++){
        if(n==pow(2,i)){
            x = true;
        }
        
    }
    if(x == true){
        cout<<"True"<<endl;
    }else
    cout<<"False"<<endl;
    
 return 0;
}