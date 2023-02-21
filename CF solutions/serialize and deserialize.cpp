#include<bits/stdc++.h>
using namespace std;

struct Node{
  int key;
  Node* left;
  Node* right;
  Node(int k){
    key=k;
    right=left=NULL;
  }
};

void serialize(Node* root, vector<int>v){
   if(root==NULL){
    v.push_back(-1);
    return;
   }
   v.push_back(root->key);
   serialize(root->left,v);
   serialize(root->right,v);
}

int i=0;
Node* deserialize(vector<int>v){
    if(i==v.size()){
        return NULL;
    }
    int val=v[i];
    i++;
    if(val==-1){
        return NULL;
    }
    Node* root=new Node(val);
    root->left=deserialize(v);
    root->right=deserialize(v);
    return root;
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    vector<int> v;
    serialize(root,v);
    Node *root_new=deserialize(v);
    inorder(root);
}