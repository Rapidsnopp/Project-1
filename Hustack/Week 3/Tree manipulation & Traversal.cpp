#include <bits/stdc++.h>
using namespace std;

struct Node{
    int id;
    vector <Node*> children;
    Node(int val) : id(val) {}
};

class Tree{
    public:
        Node* root;
        unordered_map<int,Node*> treenode;

        Tree() : root(NULL){};

        void make_root(int u){
            if(treenode.find(u)==treenode.end()){
                root=new Node(u);
                treenode[u]=root;
            }
        }

        void insert(int u, int v){
            if(treenode.find(v)!=treenode.end()&&treenode.find(u)==treenode.end()){
                Node* parent= treenode[v];
                Node* newchild= new Node(u);
                parent->children.push_back(newchild);
                treenode[u]=newchild;
            }
        }

        void preOrder(Node* root){
            if(!root) return;
            cout << root->id << " ";
            for(Node* child: root->children){
                preOrder(child);
            }
        }

        void inOrder(Node* root){
            if(!root) return;
            int n=root->children.size();
            if(n>0) inOrder(root->children[0]);
            cout << root->id << " ";
            for(int i=1;i<n;i++){
                inOrder(root->children[i]);
            }
        }

        void postOrder(Node* root){
            if(!root) return;
            for(Node* child : root->children){
                postOrder(child);
            }
            cout << root->id << " ";
        }
};

int main(){
    Tree t;
    while(1){
        string s;
        cin >> s;
        if(s=="*") break;
        else if(s=="MakeRoot"){
            int id;
            cin >> id;
            t.make_root(id);
        }
        else if(s=="Insert"){
            int u,v;
            cin >> u >> v;
            t.insert(u,v);
        }
        else if(s=="InOrder"){
            t.inOrder(t.root);
            cout << "\n";
        }
        else if(s=="PreOrder"){
            t.preOrder(t.root);
            cout << "\n";
        }
        else if(s=="PostOrder"){
            t.postOrder(t.root);
            cout << "\n";
        }
    }
}