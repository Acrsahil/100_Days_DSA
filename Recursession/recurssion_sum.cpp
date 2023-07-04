#include <iostream>
using namespace std;

int sumarr(int arr[],int size){
    if(size == 0){
        return 0;
    if(size == 1){
        return arr[0];
    }
    }else{
       
    // return (sumarr(arr,size-1) + arr[size-1]); --> logic with the reverse element approach
       return sumarr(arr+1,size-1) + arr[0]; // --> logic with the sequence element approach
    }

}
int main()
{
    int arr[5]= {1,2,3,4,5};
    int size = 5;
    cout<<sumarr(arr,size)<<endl;
    
    return 0;

}