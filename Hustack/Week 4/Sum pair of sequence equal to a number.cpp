//C++ 
#include <bits/stdc++.h> 
using namespace std;

int solution=0;
unordered_set <int> uset;

void solve(unordered_set <int> a, int M){
    for(int x : a){
        if (x>=M||x*2==M) continue;
        if(a.find(M-x)!=a.end()) solution++;
    }
    return;
}

int main() { 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,M;
    cin >> n >> M;
    int x;
    for(int i=0;i<n;i++){
        cin >> x;
        uset.insert(x);
    }
    solve(uset,M);
    cout << solution/2 << endl;
}