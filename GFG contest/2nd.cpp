#include <iostream>
#include <queue>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int sumCousins(TreeNode* root, int k) {
    // Base case
    if (root == NULL) {
        return -1;
    }

    // Find the level of the given node
    queue<TreeNode*> q;
    q.push(root);
    int level = 0;
    bool found = false;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
            if (curr->val == k) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
        level++;
    }

    // Traverse the binary tree again to find the sum of cousin nodes
    q.push(root);
    int sum = 0;
    while (!q.empty() && level > 0) {
        int size = q.size();
        for (int i = 0; i < size; i++) {
            TreeNode* curr = q.front();
            q.pop();
            if (curr->left != NULL) {
                q.push(curr->left);
            }
            if (curr->right != NULL) {
                q.push(curr->right);
            }
            if (curr->left != NULL && curr->left->val == k) {
                continue;
            }
            if (curr->right != NULL && curr->right->val == k) {
                continue;
            }
            if (level == 1) {
                if (curr->left != NULL) {
                    sum += curr->left->val;
                }
                if (curr->right != NULL) {
                    sum += curr->right->val;
                }
            }
        }
        level--;
    }

    return sum == 0 ? -1 : sum;
}

int main() {
    /*
        Example tree:
              1
             / \
            2   3
           / \   \
          4   5   6
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);

    int k = 5;
    int sum = sumCousins(root, k);
    cout << "Sum of cousin nodes of " << k << ": " << sum << endl;

    return 0;
}
