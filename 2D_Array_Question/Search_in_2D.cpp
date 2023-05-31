#include<iostream>
#include<vector>
using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix[0].size();
        int n = matrix.size();

        int s = 0;
        int e = (n*m)-1;

        while(s<=e){
            int mid = s+(e-s)/2; 
            if(matrix[mid/m][mid%m] == target){
                return true;
            }
            else if(matrix[mid/m][mid%m] < target){
                s = mid + 1;
            }
            else{
                e = mid-1;
            }
        }
        return false;


    }

int main(){
    int row = 3;
    int col = 4;
    int k = 22;
    vector<vector<int>> matrix(row ,vector<int>(col) = {1,2,3,4,5,6,7,8,9,10,11,12});
    cout<<k<<" is present or not "<<searchMatrix(matrix,k)<<endl;
    return 0;
}