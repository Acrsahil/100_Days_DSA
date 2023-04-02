#include<iostream>
using namespace std;

int main(){
    int a,b;
    std:: cout<<"Enter the value of a: "<<endl;
    std:: cin>> a;

    // we can also use std:: in place of namespace std
    
    if(a>0){
        std::cout<<"The number "<<a <<" is positive"<<endl;
    }else if(a<0){
        std::cout<<"The number "<<a <<" is negative"<<endl;
    }
    else{
        std::cout<<"The number "<<a <<" is zero "<<endl;
    }
    return 0;
}
