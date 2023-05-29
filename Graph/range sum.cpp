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
int s=0;
    void sol(TreeNode* root, int l, int h){
        if(root==NULL) return;
        sol(root->left,l,h);
        if(root->val>=l && root->val<=h){
            s+=root->val;
        }
        sol(root->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        sol(root,low,high);
        return s;
    }
};