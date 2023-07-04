#include <iostream>
using namespace std;

void word(string arr[],int n){
    if(n == 0){
        return;
    }else{
        int digit = n % 10;
        n = n/10;
        word(arr,n);
        cout<<arr[digit]<<" ";
    }
}

int main()
{
    int n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cin>>n;
    word(arr,n);

    return 0;
}