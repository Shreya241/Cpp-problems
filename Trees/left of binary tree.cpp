#include<iostream>
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
int mlevel=0;
void pleft(Node *root,int level){
  if(root==NULL){
    return;
  }
  if(mlevel<level){
     cout<<root->key<<" ";
     mlevel=level;
  }
  pleft(root->left,level+1);
  pleft(root->right,level+1);
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    pleft(root,1);
}