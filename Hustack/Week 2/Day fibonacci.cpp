#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[30];
    a[0]=0;
    a[1]=1;
    for(int i=2;i<30;i++) {
        a[i]=a[i-1]+a[i-2];
    }
    int n;
    cin >> n;
    cout << a[n-1] << endl;
}