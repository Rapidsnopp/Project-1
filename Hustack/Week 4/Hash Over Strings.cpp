#include <bits/stdc++.h>
using namespace std;

int hashstring(string s,int m){
    int result=0;
    for(char  x : s){
        result=(result*256+int(x))%m;
    }
    return result;
}

int main(){
    int n,m;
    cin >> n >> m;
    while(n--){
        string s;
        cin >> s;
        cout << hashstring(s,m) << endl;
    }
}