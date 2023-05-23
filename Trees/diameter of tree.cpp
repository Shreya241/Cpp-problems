#include<iostream>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};

int height(Node* root){
    if(root==NULL){
        return 0;
    }else{
        return 1+max(height(root->left),height(root->right));
    }
}
int diam(Node* root){
    if(root==NULL){
        return 0;
    }
    int d1=1+height(root->left)+height(root->right);
    int d2=diam(root->left);
    int d3=diam(root->right);
    return max(d1,max(d2,d3));
    
}

int main() {
	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	
	cout<<diam(root);
}


/*Therefore, final Diameter of a node can be calculated as:

Diameter = maximum(lDiameter, rDiameter, 1 + lHeight + rHeight)

Where,
lDiameter = Diameter of left subtree
rDiameter = Diameter of right subtree
lHeight = Height of left subtree
rHeight = Height of right subtree
*/