#include <bits/stdc++.h>
using namespace std;

int step(int a,int b,int c){
    if(c>max(a,b)) return -1;

    queue<vector <int>> qe;

    vector <vector <bool>> visited(a+1,vector<bool> (b+1,false));

    qe.push({0,0,0});
    visited[0][0]=true;
    while(!qe.empty()){
        auto cur = qe.front();
        qe.pop();
        int jug1=cur[0];
        int jug2=cur[1];
        int step=cur[2];

        if(jug1==c||jug2==c) return step;

        if(!visited[a][jug2]){
            visited[a][jug2]=true;
            qe.push({a,jug2,step+1});
        }

        if(!visited[jug1][b]){
            visited[jug1][b]=true;
            qe.push({jug1,b,step+1});
        }

        if(!visited[0][jug2]){
            visited[0][jug2]=true;
            qe.push({0,jug2,step+1});
        }

        if(!visited[jug1][0]){
            visited[jug1][0]=true;
            qe.push({jug1,0,step+1});
        }

        int pour1to2=min(jug1,b-jug2);
        if(!visited[jug1-pour1to2][jug2+pour1to2]){
            visited[jug1-pour1to2][jug2+pour1to2]=true;
            qe.push({jug1-pour1to2,jug2+pour1to2,step+1});
        }

        int pour2to1=min(jug2,a-jug1);
        if(!visited[jug1+pour2to1][jug2-pour2to1]){
            visited[jug1+pour2to1][jug2-pour2to1]=true;
            qe.push({jug1+pour2to1,jug2-pour2to1,step+1});
        }
    }
    return -1;

}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    cout << step(a,b,c) << endl;
}