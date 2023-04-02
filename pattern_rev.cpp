// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i,j;
    int n;
    int count = 1;
    cin>>n;
    i = 1;
    while(i<=n){
        j = 1;
        while(j<=n){
            cout<<count<<" ";
            count = count+1;
            j = j+1;
        }
        cout<<endl;
        i = i+1;
    }

    return 0;
}