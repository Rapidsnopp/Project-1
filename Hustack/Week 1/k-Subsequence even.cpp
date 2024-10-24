#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    for(int i=0;i<=n-k;i++){
        if(sum%2==0) count++;
        sum=sum+a[i+k]-a[i];
    }
    cout << count << endl;
}