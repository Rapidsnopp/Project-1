#include <bits/stdc++.h>
using namespace std;

bool isSafe(int v, int graph[][101], vector<int> &path, int pos, int n) {
    // kiem tra co dinh tiep theo ko
    if (graph[path[pos - 1]][v] == 0) {
        return false;
    }
    // kiem tra dinh da co chua
    for (int i = 0; i < pos; i++) {
        if (path[i] == v) {
            return false;
        }
    }
    return true;
}

bool hamiltonianCycleUtil(int graph[][101], vector<int> &path, int pos, int n) {
    // kiem tra co canh tu dinh cuoi cung den bat ky dinh nao hay ko
    if (pos == n) {
        return (graph[path[pos - 1]][path[0]] == 1);
    }
    // quay lui
    for (int v = 1; v < n; v++) {
        if (isSafe(v, graph, path, pos, n)) {
            path[pos] = v;
            if (hamiltonianCycleUtil(graph, path, pos + 1, n)) {
                return true;
            }
            path[pos] = -1;
        }
    }
    return false;
}

int isHamiltonCycle(int graph[][101], int n) {
    vector<int> path(n, -1);
    path[0] = 0;
    if (hamiltonianCycleUtil(graph, path, 1, n)) {
        return 1;  
    } else {
        return 0;  
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int graph[101][101] = {0};  
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            graph[u-1][v-1] = 1;
            graph[v-1][u-1] = 1;
        }
        cout << isHamiltonCycle(graph, n) << endl;
    }
    return 0;
}
