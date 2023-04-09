// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int product = 1;
    int n;
    int result;
    cin>> n;
    while(n!=0){
        int digit = n%10;
        sum = sum + digit;
        product = product * digit;
        n = n/10;
    }
    result = product - sum;
    cout<<result<<endl;

    return 0;
}
