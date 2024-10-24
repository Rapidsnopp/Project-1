#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <int> st;
    while(1){
        string s;
        cin >> s;
        if(s=="PUSH") {
            int t;
            cin >> t;
            st.push(t);
        }
        else if(s=="POP") {
            if(!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            }
            else cout << "NULL" << endl;
        }
        else if(s=="#") break;
    }
}