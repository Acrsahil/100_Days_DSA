#include<iostream>
using namespace std;

void printc(int x){
  for(int i = 1;i<=x;i++){
    cout<<i<<" ";
    
  }
}
int main()
{
   int n;
   cin>>n;
   printc(n);
 return 0;
}