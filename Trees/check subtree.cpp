/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution
{
  public:
    bool chek(Node* n1, Node* n2){
        if(n1==NULL && n2==NULL) return true;
        if(n1!=NULL && n2==NULL)return false;
        if(n1==NULL && n2!=NULL)return false;
        
        return n1->data==n2->data && chek(n1->left,n2->left) && chek(n1->right,n2->right);
    }
    bool isSubTree(Node* T, Node* S) 
    {
        if(T==NULL && S==NULL)return true;
        if(T==NULL && S!=NULL)return false;
        if(T!=NULL && S==NULL)return false;
        if(T->data==S->data){
            if(chek(T,S)){
                return true;
            }else{
                return isSubTree(T->left,S)||isSubTree(T->right,S);
            }
        }
        return isSubTree(T->left,S)||isSubTree(T->right,S);
        
    }
};