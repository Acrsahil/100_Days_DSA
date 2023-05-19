#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1,2,3}; // Normal array initilization
    array<int,4> a = {1,2,3,88};// Using Array STL

    int size = a.size();
    cout<<"Size of the array is: "<<size<<endl;

    for(int i =0; i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<"Empty or not: "<<a.empty()<<endl;

    cout<<"first element: "<<a.front()<<endl;
    cout<<"Element at 2nd endex: "<<a.at(2)<<endl;
    cout<<"last element: "<<a.back()<<endl;
    
    return 0;
}