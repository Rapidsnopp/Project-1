#include <bits/stdc++.h>
using namespace std;

struct Node{
    string name;
    vector <Node*> child;
    Node(string name) : name(name){};
};

class F_tree{
    public:
        Node* root;
        unordered_map <string,Node*> treeFamily;

        F_tree() : root(NULL){};
        void make_root(string s){
            
        }
};

int main(){

}