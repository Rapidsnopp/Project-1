#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> perm;
    for (int i = 1; i <= n; ++i) {
        perm.push_back(i);
    }
    do {
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << perm[i];
        }
        cout << endl;
    } while (next_permutation(perm.begin(), perm.end()));
}
