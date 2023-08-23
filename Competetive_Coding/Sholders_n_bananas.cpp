#include <iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int bananas_total = 0;

    for(int i = 1; i<=w; i++){
        bananas_total += i*k;
        
    }
    if(bananas_total<=n){
        cout<<0<<endl;
    }else{
        cout<<bananas_total-n<<endl;
    }

    return 0;
}