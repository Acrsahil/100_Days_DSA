#include<iostream>
using namespace std;
void fab(int n){
    int b = 1;
    int a = 0;
    int temp;
    cout<<a<<" "<<b<<" ";
    for (int i = 0;i<n;i++){
       temp = a+b;
       a = b;
       b = temp;
       cout<<temp<<" ";

    }
}
int main()
{
   int n;
   cin>>n;
   fab(n);

 return 0;
}