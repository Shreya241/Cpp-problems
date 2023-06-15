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
    int maxLevelSum(TreeNode* root) {
        if(root==NULL){return 0;}
        queue<TreeNode*>q;
        q.push(root);
        int maxs=INT_MIN;
        int l=0,ans;
        while(q.size()){
            int s=q.size();
            l++;
            int sum=0;
            for(int i=0;i<s;i++){
               TreeNode *curr=q.front();
               sum+=curr->val;
               q.pop();
               if(curr->left!=NULL){
                q.push(curr->left);
                }if(curr->right!=NULL){
                q.push(curr->right);
                }

            }
            if(sum>maxs){
                maxs=sum;
                ans=l;
            }
        }
        return ans;
    }
};