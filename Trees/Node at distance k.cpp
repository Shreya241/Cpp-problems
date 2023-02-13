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

void printk(Node *root ,int k){
    if(root==NULL){return ;}
    else if(k==0){cout<<root->key<<" ";}
    else{
        printk(root->left,k-1);
        printk(root->right,k-1);
    }
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    printk(root,2);
}