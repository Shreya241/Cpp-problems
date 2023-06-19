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
int c=0;
    int func(TreeNode* root,int prev){
        if(!root) return 0;
        if(prev<=root->val) c++;
        func(root->left,max(prev,root->val));
        func(root->right,max(prev,root->val));
        return c;
    }
    int goodNodes(TreeNode* root) {
        return func(root,INT_MIN);
    }
};