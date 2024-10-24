#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> parenthesis;
    for(char c:s ){
        if(c=='('||c=='['||c=='{') parenthesis.push(c);
        else if(c==')'&&!parenthesis.empty()){
            if(parenthesis.top()=='(') parenthesis.pop();
            else parenthesis.push(c);
        }
        else if(c==']'&&!parenthesis.empty()){
            if(parenthesis.top()=='[') parenthesis.pop();
            else parenthesis.push(c);
        }
        else if(c=='}'&&!parenthesis.empty()){
            if(parenthesis.top()=='{') parenthesis.pop();
            else parenthesis.push(c);
        }
        else return false;
    }
    if(!parenthesis.empty()) return false;
    else return true;
}

int main(){
    string s;
    cin >> s;
    if(check(s)) cout << 1 << endl;
    else cout << 0 << endl;
}