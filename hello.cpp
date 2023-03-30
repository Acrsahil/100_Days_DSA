#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"Enter the value of c: "<<endl;
    cin>>c;

    if(a>b && a>c){
        cout<< a <<" is the greatest number among "<< b <<" and "<< c <<endl;
    }else if(b>a && b>c){
        cout<<b<< " is the greatest number among "<< a <<" and "<< c <<endl;
    }else{
        cout<<c<<" is the greatest number among "<< a <<" and "<< b <<endl;
    }
    return 0;
}