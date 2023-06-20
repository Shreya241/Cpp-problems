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
    vector<double> averageOfLevels(TreeNode* root) {
        int l;
        vector<double>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            double s=0;
            double c=0;
            l=q.size();
            for(int i=0;i<l;i++){
                TreeNode* curr=q.front();
                c++;
                q.pop();
                if(curr->left!=NULL) q.push(curr->left);
                if(curr->right!=NULL) q.push(curr->right);
                s+=curr->val;
            }
            v.push_back(s/c);
        }
        return v;
    }
};