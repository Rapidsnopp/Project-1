#include <bits/stdc++.h>
using namespace std;

unordered_set <int> uset;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(uset.find(x)!=uset.end()){
            cout << 1 << endl;
        }
        else{
        uset.insert(x);
        cout << 0 << endl;
        }
    }
}