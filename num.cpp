#include<iostream>
using namespace std;
int main()
{
   int n = 1330;
   int ans;
   int m = 1;

   switch (m)
   {
   case 1:
   ans = n/100;
   n = n%100;
   cout<<"100 is "<<ans<<" times "<<endl;

   case 2:
   ans = n/20;
   n = n%20;
   cout<<"20 is "<<ans<<" times "<<endl;

   case 3:
   ans = n/1;
   n = n%1;
   cout<<"1 is "<<ans<<" times "<<endl;
   
   }

 return 0;
}