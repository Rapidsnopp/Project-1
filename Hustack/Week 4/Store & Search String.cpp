#include <bits/stdc++.h>
using namespace std;

unordered_set <string> uset;

int main(){
    while(1){
        string s;
        cin >> s;
        if(s=="*") break;
        else uset.insert(s);
    }
    while(1){
        string s;
        cin >> s;
        if(s=="***") break;
        else if(s=="find") {
            string need;
            cin >> need;
            if(uset.find(need)!=uset.end()) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if(s=="insert") {
            string need;
            cin >> need;
            if(uset.find(need)!=uset.end()) cout << 0 << endl;
            else{
                uset.insert(need);  
                cout << 1 << endl;
            }
        } 
    }
}