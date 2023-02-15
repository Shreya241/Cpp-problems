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

void printlist(Node* head){
  Node*curr=head;
  while(curr!=NULL){
    cout<<curr->key<<" ";
    curr=curr->right;
  }
}

Node* BToDLL(Node *root){
  static Node* prev=NULL;
  if(root==NULL){return root;}
  Node* head=BToDLL(root->left);
  if(prev==NULL){head=root;}
  else{
    root->left=prev;
    prev->right=root;
  }
  prev=root;
  BToDLL(root->right);
  return head;
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
  Node* head=BToDLL(root);
  printlist(head);
}