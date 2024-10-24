#include<bits/stdc++.h>
using namespace std;

int find_max_seg(int a[],int i,int j){
    int max= a[i-1];
    if(i==j) return max;
    for(int n=i;n<=j-1; n++){
        if(a[n]>max) max=a[n];
    }
    return max;
}

int find_max(int a[],int n){
    int max=a[0];
    if(n==1) return max;
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
    }
    return max;
}

int find_min(int a[],int n){
    int min=a[0];
    if(n==1) return min;
    for(int i=1;i<n;i++){
        if(a[i]<min) min=a[i];
    }
    return min;
}

long sum(int a[],int n){
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    while(1){
        string s;
        cin >>s;
        if(s=="find-max"){
            cout << find_max(a,n) << endl;
        }
        else if(s=="find-min"){
            cout << find_min(a,n) << endl;
        }
        else if(s=="sum"){
            cout << sum(a,n) << endl;
        }
        else if(s=="***") break;
        else if(s=="find-max-segment"){
            int i,j;
            cin >> i >> j;
            cout << find_max_seg(a,i,j) << endl;
        }
    }
}