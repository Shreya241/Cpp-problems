#include<iostream>
#include<queue>
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

int width(Node *root){
  if(root==NULL){return 0;}
  queue<Node*>q;
  q.push(root);
  int c=0,mc=0;
  while(!q.empty()){
    c=q.size();
    mc=max(c,mc);
    for(int i=0;i<c;i++){
        Node*curr=q.front();
        q.pop();
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
  }
  return mc;
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<width(root);
}

//Time Complexity - theta(n)
//Auxiliary Space - theta(w)