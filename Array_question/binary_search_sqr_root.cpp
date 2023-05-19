#include<iostream>
using namespace std;
    long long int sqrroot_of_int(int num){
        int s = 1;
        int e = num;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            long long int sq = mid*mid;

            if(sq==num){
                return mid;

            }else if(sq<num){
                s = mid+1;

            }else{
                e = mid -1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    
    }
    double moreprecision(int n, int precision, int tempSol){
        double factor = 1;
        double ans = tempSol;
        for(int i = 0;i<precision;i++){
            factor = factor/10;
            for(double j=ans;j*j<n;j=j+factor){
                ans = j;
            }
        }
        return ans;
    }

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int tempSol = sqrroot_of_int(num);

    cout<<"Answer is "<< moreprecision(num,3,tempSol)<<endl;
    return 0;
}