#include<iostream>
using namespace std;

int main(){
    // pointer in array
    // alternative method to print the array using pointer arthemetic
    // int arr[4] = {2,3,4,5};
    // cout<<"first method"<<endl;
    // for(int i = 0; i<4; i++){
    //     cout<<arr[i]<<" "<<*(arr+i)<<endl;
    // }
    // cout<<"Second Method "<<endl;
    // for(int i = 0; i<4; i++){
    //     cout<<i[arr]<<" "<<*(i+arr)<<endl;
    // }
    // int i = 3;
    // cout<<i[arr]<<endl;
   

    int x;
   int arr[10] = {20,2,3,4,5,6,7,8,9,10};
//    cout<<sizeof(arr)<<endl;


    cout<<&arr<<endl;
    cout<<&arr[0]<<endl;

//    cout<<sizeof(&arr)<<endl; // it is the pointer to array so output will be 8

//    cout<<&arr<<endl; // it will print the address of the first element of the array 

//    cout<<*arr<<endl; // it will print the first element of the array

   cout<<arr<<endl;


   int *p = arr;
   p = p+3; // it will print  3 element in the array from the current location 
   cout<<*p<<endl;



   char ran[6] = "sahil";
   char *pu = &ran[0];
   
   cout<<"whole array "<<pu<<endl; // it will print whole character array 


   char ch[6] = "sahil";
   char *c = &ch[0];
   cout<<"first element "<<*c<<endl; // it will print whole character array 


   char cha = 's';
   char *po = &cha;
   cout<<po<<endl; // it will print random number untill it dont get the null character
    return 0;
}