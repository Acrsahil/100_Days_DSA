#include<iostream>
using namespace std;
int main()
{
   int size = 100000;
   int arr[size];
   int value = -24;
   
   for(int i = 0;i<size;i++){
    arr[i] = value;
   }
   for(int i = 0;i<size;i++){
    cout<<arr[i]<<" ";
   }


 return 0;
}