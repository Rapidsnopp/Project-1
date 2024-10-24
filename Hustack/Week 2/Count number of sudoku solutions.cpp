#include <bits/stdc++.h>
using namespace std;

int cnt=0;

bool check(vector<vector<int>> &grid, int row, int col, int num){
    // check row
    for(int i=0;i<9;++i){
        if(grid[row][i]==num) return false;
    }
    // check col
    for(int j=0;j<9;++j){
        if(grid[j][col]==num) return false;
    }
    // check 3x3 sub grid
    int start_row=row-row%3;
    int start_col=col-col%3;
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            if(grid[i+start_row][j+start_col]==num) return false;
        }
    }

    return true;
}

void solve(vector< vector<int>> &grid,int row,int col,int &cnt){
    if(row==9){
        cnt++;
        return;
    }
    if(col==9) {
        solve(grid,row+1,0,cnt);
        return;
    }
    if(grid[row][col]!=0) {
        solve(grid,row,col+1,cnt);
        return;
    }
    for(int num=1;num<=9;++num){
        if(check(grid,row,col,num)){
            grid[row][col]=num;
            solve(grid,row,col+1,cnt);
            grid[row][col]=0;
        }
    }
}

int main(){
    vector <vector<int>> grid (9,vector<int>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> grid[i][j];
        }
    }
    solve(grid,0,0,cnt);
    cout << cnt << endl;

}