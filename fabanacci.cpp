#include<iostream>
using namespace std;
int fab(int n){
    if(n<=1){
        return n;
    }
    int ans = fab(n-1)+fab(n-2);
    return ans;

}
int main()
{
   int n;
   cin>>n;
for(int i = 0;i<n;i++){
    int result = fab(i);
    cout<<result<<" ";
}

 return 0;
}