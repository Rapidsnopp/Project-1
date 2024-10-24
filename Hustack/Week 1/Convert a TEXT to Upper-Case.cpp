//C++ 
#include<bits/stdc++.h>
using namespace std;

int main(){
    string input,line;

    while(getline(cin,line)){
        input+=line + "\n";
    }
    for(char &c:input) c=toupper(c);
    cout << input;
}
