#include <bits/stdc++.h>
using namespace std;

int main(){
    queue <int> qe;
    while (1){
        string s;
        cin >> s;
        if(s=="#") break;
        else if(s=="PUSH"){
            int t;
            cin >> t;
            qe.push(t);
        }
        else if(s=="POP"){
            if(!qe.empty()) {
                cout << qe.front() << endl;
                qe.pop();
            }
            else cout << "NULL" << endl;
        }
    }
}