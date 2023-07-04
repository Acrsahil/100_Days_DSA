#include <iostream>
using namespace std;


void print(int arr[],int n, int start = 2){ // default arguments is start = 2
    for(int i = start; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n = 10;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print(arr,n); 
    // not passing start because of the defalut arguments (*works correctly*)

    return 0;
}