#include <iostream>
using namespace std;

int main()
{
    int num[4];
    int max = 0;
    int ans[3];
    for(int i = 0; i<4; i++){
        cin>>num[i];
        if(num[max]<num[i]){
            max = i;
        }
    }

    for(int i = 0; i<4; i++){
        if(max != i){
            ans[i] = num[max] - num[i];
            cout<<ans[i]<<" ";
        }
        
    }
    cout<<endl;

    return 0;
}