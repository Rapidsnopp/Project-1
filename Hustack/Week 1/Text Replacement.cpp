#include <bits/stdc++.h>
using namespace std;

int main(){
    string p1,p2,T;
    getline(cin,p1);
    getline(cin,p2);
    getline(cin,T);
    size_t pos = 0;
    while ((pos = T.find(p1, pos)) != string::npos) {
        T.replace(pos, p1.length(), p2);
        pos += p2.length(); 
    }
    cout << T << endl;
}