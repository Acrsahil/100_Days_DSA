#include<iostream>
using namespace std;

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int strow = 0;
        int endcol = col-1;

        while(endcol>=0 && strow<row){
            int element = matrix[strow][endcol];
            if(target == element){
                return 1;
            }else if(target < element){
                endcol--;
            }else{
                strow++;
            }
        }
        return 0;
    }
int main(){
    
    return 0;
}