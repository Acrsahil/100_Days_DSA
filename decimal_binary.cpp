// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    
  int n;
  cin>>n;
  
  
  int ans = 0;
  int i = 0;
  while(n != 0){
        int bit = n&1; // only true if n is odd
        ans = (bit * pow(10,i))+ans;
        n = n>>1; // divid n by 2 each
        i++;
        cout<<bit<<endl;
  }
cout<<"Binary: "<<ans<<endl;
  

    return 0;
}
