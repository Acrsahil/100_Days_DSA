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
        int bit = n%10;
        if(bit == 1){
            ans = ans + pow(2,i);
        }
        n = n/10;
        i++;
  }
cout<<"Decimal: "<<ans<<endl;
  

    return 0;
}
