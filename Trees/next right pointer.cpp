/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>q;
        if(root)q.push(root);
        int ln;
        while(!q.empty()){
            ln=q.size();
           for(int i=0;i<ln;i++){
               Node* curr=q.front();
               q.pop();
               if(curr->left!=NULL) q.push(curr->left);
               if(curr->right!=NULL)q.push(curr->right);
               if(i==ln-1){
               curr->next=NULL;
               }
               else{
                   curr->next=q.front();
               }
           }
        
        }
        return root;
    }
};