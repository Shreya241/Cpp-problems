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

int isbalan(Node* root){
    if(root==NULL) return 0;
    int lh=isbalan(root->left);
    if(lh==-1) return -1;
    int rh=isbalan(root->right);
    if(rh==-1) return -1;
    if(abs(lh-rh)>1) return -1;
    else return max(lh,rh)+1;
}

int main(){
  Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(5);
	root->right->left=new Node(2);
	root->right->right=new Node(3);
    if(isbalan(root)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

//Time complexity O(n)