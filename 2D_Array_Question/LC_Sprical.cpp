#include<iostream>
#include<vector>
using namespace std;

vector<int>Sprical(vector<vector<int>> arr ,int r,int c){
    vector<int> ans;
    int col = arr.size();
    int row = arr[0].size();
    int strow = 0;
    int stcol = 0;
    int endrow = row -1;
    int endcol = col -1;

    int total = col*row;
    int count = 0;

    while(count<total){
        for(int i = stcol;i<=endcol && count<total;i++){
            ans.push_back(arr[strow][i]);
            count++;
        }
        strow++;

        for(int i = strow; i<=endrow && count<total; i++){
            ans.push_back(arr[i][endcol]);
            count++;
        }
        endcol--;

        for(int i = endcol; i>= stcol && count<total; i--){
            ans.push_back(arr[endrow][i]);
            count++;
        }
        endrow--;

        for(int i = endrow; i>= strow && count< total; i--){
            ans.push_back(arr[i][stcol]);
            count++;
        }
        stcol++;
    }
    return ans;
}


int main(){
    int row = 3;
    int col = 3;
    vector<vector<int>> matrix(row,vector<int>(col));
    for(int i = 0;i<row;i++){
        for(int j = 0; j<col; j++){
            cin>>matrix[i][j];
        }
    }


    vector<int> ans = Sprical(matrix,row,col);

    for(int i : ans){
        cout<<i<<" ";
    }
    
    return 0;
}