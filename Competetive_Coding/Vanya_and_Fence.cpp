#include <iostream>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int count = 0;

    int height[n];

    for(int i = 0; i<n; i++){
        cin>>height[i];
        if(height[i]<=h){
            count += 1;
        }else{
            count = count + 2;
        }
    }
    cout<<count<<endl;
    return 0;
}