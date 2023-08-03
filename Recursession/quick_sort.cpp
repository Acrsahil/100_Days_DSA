#include <iostream>
using namespace std;


int partition(int *A, int low, int high)
{
    int pivot = A[low]; // pivot = 2
    int i = low + 1;// 1
    int j = high; // 8
    
     while (i <= j){
        while (A[i] <= pivot)
        {
            
            i++;

        }

        while (A[j] > pivot)
        {
            // cout<<A[j]<<" ";
            j--;
        }cout<<endl;

        if (i < j)
        {
            
            swap(A[i],A[j]);
        }
     }
    // Swap A[low] and A[j]
    swap(A[low],A[j]);
    cout<<j<<endl;
    return j;
}

void quickSort(int *A, int low, int high)
{

    if (low < high)
    {
     // Index of pivot after partition
        int partitionIndex = partition(A, low, high); 
        quickSort(A, low, partitionIndex - 1);  // sort left subarray 
        quickSort(A, partitionIndex + 1, high); // sort right subarray
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
        for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");

}