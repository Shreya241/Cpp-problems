//Space complexity O(n)


class Solution {
public:
    void solve(TreeNode* root,vector<int>&v){
        if(root!=NULL){
            solve(root->left,v);
            solve(root->right,v);
            v.push_back(root->val);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>v;
        solve(root,v);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};

//Space complexity O(1)

class Solution {
public:
    void solve(TreeNode* root,int &ans,int &cnt,int k){
       if(root==NULL) return;
       solve(root->left,ans,cnt,k);
        cnt++;
        if(cnt==k){
           ans=root->val;
           return;
        }
        solve(root->right,ans,cnt,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        int cnt=0;
        solve(root,ans,cnt,k);
        return ans;
    }
};