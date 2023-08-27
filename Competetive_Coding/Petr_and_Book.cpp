#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int day[7];

    for(int i = 0; i<7; i++){ 
        cin>>day[i];
    }
    int i = 0;
    while(n>0){
        n -= day[i];
        if(n<=0) break;
        i++;
        i %= 7;
    }
    cout<<i+1<<endl;

        
    return 0;
}