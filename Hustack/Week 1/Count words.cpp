#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;    
    string input,line,word;

    while(getline(cin,line)){
        input += line + "\n";
    }
    replace(input.begin(), input.end(), '\t', ' ');
    istringstream stream(input);
    while(stream >> word) ++count;
    cout << count << endl;
}