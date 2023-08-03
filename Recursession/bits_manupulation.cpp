#include <iostream>
using namespace std;

int sqr(int n){
        int sq = 1;
    for(int i = 0; i<n; i++){
        sq = sq*2;
    }
    return sq-1;
}
int main()
{

int n = 1;
int bits = (1<<n);
cout<< "bits: "<<bits<<endl;
cout<<"square: "<<sqr(n)<<endl;


    return 0;
}