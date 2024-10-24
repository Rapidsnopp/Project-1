#include<bits/stdc++.h>
using namespace std;

list <int> L;

bool checklist(list<int> L,int k){
    for(auto it=L.begin(); it!=L.end();it++){
        if((*it)==k){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int m;
        cin >> m;
        L.push_back(m);
    }
    string query;
    while(1){
        cin >> query;
        if(query=="#") break;
        else if(query=="addlast"){
            int k;
            cin >> k;
            if(!checklist(L,k)) L.push_back(k);
        }
        else if(query=="addfirst"){
            int k;
            cin >> k;
            if(!checklist(L,k)) L.push_front(k);
        }
        else if(query=="addbefore"){
            int u,v;
            cin >> u >> v;
            if((checklist(L,v))&&(!checklist(L,u))) {
                for(auto it=L.begin();it!=L.end();it++){
                    if((*it)==v) L.insert(it,u);
                }
            }
        }
        else if(query=="addafter"){
            int u,v;
            cin >> u >> v;
            if((checklist(L,v))&&(!checklist(L,u))) {
                for(auto it=L.begin();it!=L.end();it++){
                    if((*it)==v){
                        it=next(it);
                        L.insert(it,u);
                    }
                }
            }
        }
        else if(query=="remove"){
            int k;
            cin >> k;
            for(auto it=L.begin();it!=L.end();it++){
                if((*it)==k) {
                    L.erase(it);
                    break;
                }
            }
        }
        else if(query=="reverse"){
            L.reverse();
        }
    }
    for(int val : L){
        cout << val << " ";
    }
}