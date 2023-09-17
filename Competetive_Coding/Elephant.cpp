#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int sum = 0;
    int count = 0;

    for(int i = 5; i>=0; i--){
        if(sum != n){
            if(n%i != 0){
                cout<<i<<endl;
               sum = n/i+1;
               cout<<sum<<endl;
               break;
            }else{
                cout<<i<<endl;
                sum = n/i;
                cout<<sum<<endl;
                break;
            }

        // cout<<count<<endl;
        }
        
    }
    return 0;
}