#include <iostream>
using namespace std;


bool issorted(int arr[],int size){
    if (arr[0]>arr[1]){
        return false;
    }if(size == 0 || size == 1){
        return true;
    }else{
        int remainigpart = issorted(arr+1,size-1);
        return remainigpart;
    }
}
int main()
{
    int arr[5] = {1,8,8,109,109};
    int size = 5;
    if(issorted(arr,size)){
        cout<<"The array is sorted"<<endl;
    }else{
        cout<<"The array is not sorted"<<endl;
    }
    
    return 0;
}