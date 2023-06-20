/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* soltn(vector<int> &in,vector<int> &post,int ins,int ine,int &posIn){
    if(ins>ine) return nullptr;
    TreeNode* head=new TreeNode(post[posIn--]);
    int inInd;
    for(int i=ins;i<=ine;i++){
        if(in[i]==head->val){
            inInd=i;
            break;
        }
    }
    head->right=soltn(in,post,inInd+1,ine,posIn);
    head->left=soltn(in,post,ins,inInd-1,posIn);
    return head;
}


    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n=post.size();
        int posIn=n-1;
        return soltn(in,post,0,n-1,posIn);
    }
};