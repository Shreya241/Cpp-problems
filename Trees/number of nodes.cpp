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

int count(Node *root){
  if(root==NULL){
    return 0;
  }
   return 1+count(root->left)+count(root->right);
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<count(root);
}


//Theta(n)