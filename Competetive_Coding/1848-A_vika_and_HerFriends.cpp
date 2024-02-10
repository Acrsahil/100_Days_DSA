#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n >> m >> k;
        int x,y;
        cin>>x>>y;
        bool ans = false;
        
        for(int i = 0; i<k; i++){
            int fx,fy;
            cin>>fx>>fy;
            int c = abs(x-fx) + abs(y-fy);
            if(c % 2 == 0){
                ans = true;
            }
        }
        if(ans){
            cout<<"no"<< endl;
        }else{
            cout<<"yes"<< endl;
        }
    }
    return 0;
}
