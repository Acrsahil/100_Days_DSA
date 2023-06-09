#include<iostream>
using namespace std;



void update(int *p){
    *p +=1;
}
int main(){
    int temp = 5;
    int *p = &temp;
    cout<<"before -> "<<*p<<endl;
    update(p);
    cout<<"after -> "<<*p<<endl;
    return 0;
}