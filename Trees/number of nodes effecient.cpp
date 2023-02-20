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

int count(Node *root){
  int lh=0,rh=0;
  Node* curr=root;
  while(curr!=NULL){
    lh++;
    curr=curr->left;
  }
  curr=root;
  while(curr!=NULL){
    rh++;
    curr=curr->right;
  }
  if(lh==rh){
    return pow(2,lh)-1;
  }else{
    return 1+count(root->left)+count(root->right);
  }
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
    cout<<count(root);
}


//Theta(lon(n)*log(n))