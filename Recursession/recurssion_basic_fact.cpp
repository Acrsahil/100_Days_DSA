#include <iostream>
using namespace std;

int fact(int n){
    if(n <= 1){
        return 1;
    }else{

        return n * fact(n - 1);
    }
    
}

void count(int n){
    if(n == 1){
        cout<<n<<endl;
    }else{
         count(n-1);
        cout<<n<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
   count(n);

    return 0; 
}