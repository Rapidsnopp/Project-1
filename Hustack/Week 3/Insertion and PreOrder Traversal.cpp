#include <bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node *leftchild;
    Node *rightchild;
};

Node* makeroot(int k){
    Node* root=new Node();
    root->key=k;
    root->leftchild=NULL;
    root->rightchild=NULL;
    return root;
}

Node* insert(Node*root,int k){
    if(root==NULL) return makeroot(k);
    else{
        if(root->key>k) root->leftchild=insert(root->leftchild,k);
        else if(root->key<k) root->rightchild=insert(root->rightchild,k);
    }
    return root;
}

void pre_order(Node* root){
    if(root==NULL) return;
    else {
        cout << root->key << " ";
        pre_order(root->leftchild);
        pre_order(root->rightchild);
    }
}

int main(){
    Node* root=NULL;
    while(1){
        string s;
        cin >> s;
        if(s=="#") break;
        else if(s=="insert") {
            int k;
            cin >> k;
            root=insert(root,k);
        }
    }
    pre_order(root);
}