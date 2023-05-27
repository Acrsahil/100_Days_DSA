#include<iostream>
#include<vector>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
    vector<int> ans;
    for(int col = 0;col<mCols;col++){
        if(col&1){
            for(int row = nRows-1;row>=0; row--){
                ans.push_back(arr[row][col]);
            }

        }else{
            for(int row = 0; row<nRows; row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;

}

int main(){
    int row = 3;
    int col = 3;
    vector<vector<int>> matrix(row,vector<int>(col));
    for(int i = 0;i<row;i++){
        for(int j = 0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    vector<int> ans = wavePrint(matrix,row,col);
    for(int i: ans){
        cout<<i<<" ";
    }

    
    
    return 0;
}