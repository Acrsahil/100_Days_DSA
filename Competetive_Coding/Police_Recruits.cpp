#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mem[n];
    int count = 0;
    int availableOfficers = 0;  // Track the number of available officers

    for(int i = 0; i<n; i++){
        cin>>mem[i];

        if(mem[i] == -1){
            if(availableOfficers == 0){
                count++; // if there is no officers to handel crime
            }else{
                availableOfficers--; // if there is officers available
            }
        }else{
            availableOfficers += mem[i]; // if officers was heired
        }
    }
    cout<<count<<endl;
    return 0;
}
