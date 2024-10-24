#include <bits/stdc++.h>
using namespace std;

void DFS(vector<vector<int>> &adj,vector<bool> &visit,int s){
    visit[s]=true;
    cout << s+1 << " ";

    for(int i : adj[s]){
        if(visit[i]==false){
            DFS(adj,visit,i);
        }
    }
}

void Try(vector<vector<int>> &adj,int s){
    vector<bool> visit(adj.size(),false);
    DFS(adj,visit,s);
}

void addE(vector<vector<int>> &adj,int s,int t){
    adj[s].push_back(t);
    adj[t].push_back(s);
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cin >> u >> v;
        addE(adj,u-1,v-1);
    }
    Try(adj,0);
}