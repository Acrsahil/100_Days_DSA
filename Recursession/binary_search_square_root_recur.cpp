#include <iostream>
using namespace std;

void print(int num, int s, int e,int mid){
    for(int i = s; i<=e; i++){
        cout<<mid<<" ";
    }cout<<endl;
}


long long int sqrr(int num,int s, int e){

    long long mid = s+(e-s)/2;
    int sq = mid*mid;
    if(s>e){
        return -1;
    }
    print(num,s,e,mid);
    if(sq == num ){
        return mid;

    }else if(sq<num){
        return sqrr(num,mid+1,e);

    }else{
        return sqrr(num,s,mid-1);
    }
}

int main()
{
    int num;
    cin>>num;
    int s = 0;
    int e = num;
    cout<<"Answer is "<< sqrr(num,s,e) <<endl;
    

    return 0;
}