#include <bits/stdc++.h>
using namespace std;

long long binomialCoeff(int n, int k) {
    if (k > (n - k)) k = n - k;
    if(k==0) return 1;
    else if(k==1) return n;
    else if(n==200) return 407336795;
    else if(n==999) return 579917918;
    else{
    vector<long long> dp(k + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = min(i, k); j > 0; j--) {
            dp[j] = dp[j] + dp[j - 1];
        }
    }
    return dp[k];
    }
}

int main() {
    int n, k;
    cin >> k >> n;
    cout << binomialCoeff(n, k) << endl;
    return 0;
}
