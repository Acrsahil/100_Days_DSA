#include <iostream>
using namespace std;
int search(int arr[], int n, int key)
{
    int st = 0;
    int end = n - 1;
    int mid = st + (end - st) / 2;
    while (st <= end)
    {
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = st + (end - st) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 4, 8, 16, 64};
    int even[6] = {1,22,44,76,98,106};
    int key = 44;
    int n = 6;
    int find = search(arr, n, key);
    cout << "The " << key << " is in " << find << " index of the array" << endl;
    
    return 0;
}