#include <iostream>
using namespace std;


int partation(int *arr,int s, int e){
    int pivot = arr[s];
    int i = s+1; // without +1 also works fine but adding +1 will reduce the time to compile the code
    int j = e;

    while(i<=j){

    while(arr[i]<= pivot){ // stops when it find the greater element 
        i++;
    }
    while(arr[j]>pivot){ // stops when it find the smaller element
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
    }
    swap(arr[s],arr[j]);
    return j;
    
}
void quickSort(int *arr,int s, int e ){
    if(s<e){
        int p = partation(arr,s,e);
        quickSort(arr,s,p-1);
        quickSort(arr,p+1,e);
    }
}

int main()
{
    //int A[] = {3, 5, 2, 13, 12, 3, 2, 13, 45};
    int A[] = {2,3,1,18,7,2,15,20,3};
    // 2p,3i,1,18,7,2j,15,20,3
    // swap (3,2)
    // a = {2,2,1,18,7,3,15,20,3}

    int n = 9;
    

    quickSort(A, 0, n - 1);
    for(int i = 0; i<n; i++){
        cout<<A[i]<<" ";
    }cout<<endl;

}