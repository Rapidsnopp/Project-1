#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int first;
    if((100 % n)==0) first=100;
    else first=(100/n+1)*n;
    while(first<1000){
        cout << first <<" ";
        first+=n;
    }
}