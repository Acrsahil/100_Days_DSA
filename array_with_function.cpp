#include<iostream>
using namespace std;

void printarr(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size = 14;
   int first[size] = {0}; // all the element will set zero in this case
   printarr(first,size);
    
   int second[12] = {1,2,3,4}; // others element will set to zero except {1,2,3,4}
   printarr(second,12);
    


char ch[5] = {'s','a'}; // it will set set other element to zero 
cout<<size<<endl;
for(int i = 0;i<5;i++){
    cout<<ch[i]<<" ";
}
 return 0;
}
