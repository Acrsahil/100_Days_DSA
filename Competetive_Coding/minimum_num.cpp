#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mins = 10;
    int count = 0;
    while(n!=0){
        int carry = n%10;
        if(carry == 0){
            mins = carry;
        }
        else if(carry<=9){
            mins = min(mins,carry);
        }
        n/=10;
        count++;
    }

    int ans = 0;
    while(count != 0){
        ans = ans * 10 + mins;
        count --;
    }
    cout<<ans<<endl;
    return 0;
}