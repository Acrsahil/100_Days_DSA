#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {1, 232323, 8, 123};
    int max = arr[0];
    int min = arr[0];
    for (int i = 2; i < 4; i++){
            if (arr[i] > max){
                max = arr[i];
            }
            if(arr[i]<min){
                min = arr[i];
            }
        
    }
   
    cout<<"Min : "<< min<<endl;
    cout <<"Max : "<< max << endl;

    return 0;
}