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

bool issum(Node *root){
   if(root==NULL){
    return true;
}
   if(root->left==NULL && root->right==NULL){
    return true;
   }
   int s=0;
   if(root->left !=NULL){s+=root->left->key;}
   if(root->right !=NULL){s+=root->right->key;}
   return (root->key ==s && issum(root->left) && issum(root->right)); 
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(5);
	root->right->left=new Node(2);
	root->right->right=new Node(3);
    if(issum(root)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

//Time complexity O(n)
//Auxiliary space O(h)