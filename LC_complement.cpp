#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int m = n;
  int mask = 0;
  int ans;

if(n == 0){
  ans = 1;
  cout<<ans<<endl;
}else{
  while(m!=0){
     mask = (mask<<1) | 1;
    m = m>>1;
  }

  ans = (~n) & mask;
  cout<<"complement of "<<n<<" is: "<<ans<<endl;
}
}