#include<iostream>
using namespace std;
bool Search(int arr[],int n){
       for(int i = 0;i<10;i++){
        if(arr[i]==n){
           return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10] = {3,4,65,1,13,-17,10,9,2,30};
    int key;
    cout<<"Enter the key to search: ";
    cin>>key;
    if(Search(arr,key)){
        cout<<key<<" is present in the array "<<endl;
    }else{
        cout<<key<<" is absent in the array "<<endl;
    }

    return 0;
}