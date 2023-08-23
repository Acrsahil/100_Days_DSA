#include <bits/stdc++.h>
using namespace std;

bool iscorrect(vector<vector<int>> m,int n,int x,int y,vector<vector<int>>temp){
    if(x>=0 && x<n && y>=0 && y<n && temp[x][y] == 0 && m[x][y] == 1){
        return true;
    }
    return false;
}


void solve(vector<vector<int>>& m,int n,vector<string>&ans,string output,int x,int y,vector<vector<int>> visited){
    //base case
    if(x== n-1 && y == n-1){
        ans.push_back(output);
        return;
    }
    visited[x][y] = 1;
    
    //down
    int tempx = x+1;
    int tempy = y;
    if(iscorrect(m,n,tempx,tempy,visited)){
        output.push_back('D');
        solve(m,n,ans,output,tempx,tempy,visited);
        output.pop_back();
    }
        //left
     tempx = x;
     tempy = y-1;
    if(iscorrect(m,n,tempx,tempy,visited)){
        output.push_back('L');
        solve(m,n,ans,output,tempx,tempy,visited);
        output.pop_back();
    }
        //right
     tempx = x;
     tempy = y+1;
    if(iscorrect(m,n,tempx,tempy,visited)){
        output.push_back('R');
        solve(m,n,ans,output,tempx,tempy,visited);
        output.pop_back();
    }
        //up
     tempx = x-1;
     tempy = y;
    if(iscorrect(m,n,tempx,tempy,visited)){
        output.push_back('U');
        solve(m,n,ans,output,tempx,tempy,visited);
        output.pop_back();
    }

    visited[x][y] = 0;
}
    

    vector<string> findPath(vector<vector<int>>& m, int n) {
        vector<string> ans;
        string output;
        int x = 0;
        int y = 0;
        if(m[x][y] == 0){
            return ans;
        }
        vector<vector<int>> temp = m;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                temp[i][j] = 0;
            }
        }

        solve(m,n,ans,output,x,y,temp);
        return ans;
    }

int main()
{
    vector<vector<int>> m = {{1, 0, 0, 0},
                            {1, 1, 0, 0},
                            {0, 1, 1, 0},
                            {0, 1, 1, 1}};
    int n = 4;
    vector<string> ans = findPath(m,n);
    for(auto i : ans){
        cout<<i<<endl;
    }
    
    return 0;
}