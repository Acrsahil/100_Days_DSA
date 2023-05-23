#include<iostream>
using namespace std;

void rev(char name[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(name[s++],name[e--]);
    }
   
}

int main(){
    char name [20];
    int n;
    cin>>name;
    for(int i = 0;name[i]!='\0';i++){
        n++;
    }
    rev(name,n);
    cout<<name<<endl;
    
    return 0;
}