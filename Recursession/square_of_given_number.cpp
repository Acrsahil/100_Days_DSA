#include <iostream>
using namespace std;


int square(int a,int b){
    int ans = 1;
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    cout<<" value "<< a <<endl;
    cout<<"power "<< b <<endl;
    cout<<endl;

   ans = square(a,b/2);
   if(b&1==1){
    // if the number is odd
    return a*ans*ans;
   }else{
    // if the number is even
    return ans*ans; // function call parellely 
   }

}
int main()
{
    int a,b;
    cin >> a >> b;
    int ans = square(a,b);
    cout<<"The square of the given number is " << ans <<endl;

    
    return 0;
}