#include <iostream>
using namespace std;

// void debug(int n){
//     cout<<n<<endl;
// }

int main()
{
    int t;
    cin>>t;
    while(t--){
    int sum = 0;
    int count = 0;
    int num;
    int k = 1;
    bool check = 0;
    cin>>num;
    for(int i = 1; i<=9; i++){
        for(int j = 1; j<=4; j++){
        sum = sum * 10 + i;
        if(sum != num){
            count = j + count;
            // debug(j);
        }else{
            count = j + count;
            // cout<<"True"<<endl;
            check = 1;
            break;
        }
        }
        sum = 0;
        if(check){
            break;
        }
    }
    cout<<count<<endl;
    }

    return 0;
}