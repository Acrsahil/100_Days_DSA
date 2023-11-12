#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>> t;
    long long int n;
    while(t--){
        cin>>n;
        int count = 0;
        for(int i = 1; i<=n; i++){
            if(n%i==0){
                count++;
            }else{
                break;
            }
        }
        cout<< count << endl;
    }
    return 0;
}