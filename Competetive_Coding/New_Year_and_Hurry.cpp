#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int solt = 0;
    int count = 0;
    int remainingtime = 240-k;
    for(int i = 1; i<=n; i++){
        solt += 5*i;
        if(solt <= remainingtime){
            count ++;
        }else if(k<n && solt+k <= 4*60){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}