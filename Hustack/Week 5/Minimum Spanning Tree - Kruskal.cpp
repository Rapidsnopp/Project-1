#include <bits/stdc++.h>
using namespace std;

map <vector<vector<int>>,int> weight;

void Kruskal(vector<vector<int>> &adj,vector<bool> &visit,int s){
    
}

void addE(vector<vector<int>> &adj,int u,int v,int w){
    adj[u].push_back(v);
    adj[v].push_back(u);
    weight.insert(make_pair(adj[u][v],w));
}

int main(){
    int n,m;
    cin >> n >> m;
    vector <vector<int>> adj(n);
    vector <bool> visit(adj.size(),false);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin >> u >> v >> w;
        addE(adj,u-1,v-1,w);
    }
    
}