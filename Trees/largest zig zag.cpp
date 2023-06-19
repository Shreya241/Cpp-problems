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
    int ans=0;  
    void solve(TreeNode* root,int d,int l){
        if(!root) return;
        ans=max(ans,l);
        if(d==0)
        {
            solve(root->left,0,1);
            solve(root->right,1,l+1);
        }else{
            solve(root->left,0,l+1);
            solve(root->right,1,1);
        }
    }
    int longestZigZag(TreeNode* root) {
        solve(root->left, 0, 1);
        solve(root->right, 1, 1);
        return ans;
    }
};