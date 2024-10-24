#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==0){
        if(b==0){
            if(c==0) cout << "0" << endl;
            else cout << "NO SOLUTION" << endl;
        }
        else cout << fixed << setprecision(2) << -(float)b/a << endl;
    }
    else {
        float delta= b*b-4*a*c;
        if(delta<0) cout << "NO SOLUTION"<<endl;
        else if(delta==0) cout << fixed << setprecision(2) << float(-b)/(2*a) ;
        else {
            cout << fixed << setprecision(2) << (-b-sqrt(delta))/(2*a) << " " <<(-b+sqrt(delta))/(2*a)<<endl;
        }
    }
}