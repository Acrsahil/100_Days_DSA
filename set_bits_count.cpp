#include<iostream>
using namespace std;

int countbit(int a,int b){
  int count = 0;
  while(a!=0){
    int bit = (a&1); // if the last value of the bit is 1 then it will be 1 
  count += bit;
  a = a>>1;
  }
  while(b!=0){
    int bits = (b&1);
    count += bits;
    b = b>>1;
  }
  return count;
  
}
int main()
{
   int a,b;
   cin>>a>>b;
   int ans = countbit(a,b);
   cout<<ans<<endl;


   
   
 return 0;
}