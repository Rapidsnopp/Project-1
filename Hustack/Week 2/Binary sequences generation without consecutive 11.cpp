#include <bits/stdc++.h>
using namespace std;

void solve(int n,string cur){
    if (cur.length() == n) {
        cout << cur << endl;
        return;
    }
    solve(n, cur + '0');
    if (cur.empty() || cur.back() != '1') {
        solve(n, cur + '1');
    }
}

int main(){
    int n;
    cin >> n;
    solve(n,"");
}