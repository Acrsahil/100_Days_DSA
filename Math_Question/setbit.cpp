#include <bits/stdc++.h>
using namespace std;

// clearing bit
int clearingibit(int i,int n){
    int mask = ~(1<<i); // Mask -> not altering real n
    int ans = (n & mask); // making the i bit 0
    return ans;
}
// setting bit
int settingibit(int i, int n){
    int mask = (1<<i); // Mask -> not altering real n 
    int ans = (n | mask);
    return ans;
}
//checking bit
string checkingibit(int i, int n){

    int mask = (1<<i); // Mask -> not altering real n 
    int ans = (n&mask);
    if(ans){
    return "Set";
    }
    return "Not Set";
}
// setting last one bit
int remove_last_set_bit(int n){
    return (n&(n-1));
}
int main() {

    int n; cin >>n;
    int i; cin >> i;
    cout << "Setting "<< i << " bit 0 -> "<< clearingibit(i,n) << endl;
    cout << "Setting "<< i << " bit 1 -> "<< settingibit(i,n) << endl;
    cout << "Checking "<< i << " bit -> "<< checkingibit(i,n) << endl;
    cout << "Remove last set bit "<< "-> "<< remove_last_set_bit(n) << endl;
return 0;
}