#include <iostream>
using namespace std;

int main()
{
    int m;
    cin>>m;
    int n;
    cin>>n;
     // creating 2d array
    int **arr = new int*[m];
    for(int i = 0; i<m; i++){
        arr[i] =  new int[n];
    }

     // input 2d array from user
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
    }

     // printing 2d array
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


        // relazing memory of 2d array
        for(int i = 0; i<m; i++){
            delete [] arr[i];
        }
        delete []arr;
    return 0;
}