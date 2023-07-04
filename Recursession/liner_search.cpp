#include <iostream>
using namespace std;


bool linersearch(int arr[],int size,int k){
    if(size == 0){
        return false;
    }
    if(arr[0]==k){
        return true;

    }
    else{
        return linersearch(arr+1,size-1,k);
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int key = 0;
    int size = 5;
    if(linersearch(arr,size,key)){
        cout<<key<<" is present in array"<<endl;
    }else{
        cout<<key<<" is not present in array"<<endl;
    }
    
    return 0;
}