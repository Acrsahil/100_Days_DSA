#include <iostream>
using namespace std;
void func(int &num){
    num++;
}

int getsum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int num = 5;
    func(num);
    cout<<num<<endl;


    int n;
    cin>>n;

    // variable size array
    int * arr = new int[n];
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<< "The sum of the array is "<<getsum(arr,n) <<endl;


    
    return 0;
}