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
    int sumRootToLeaf(TreeNode* root) {
        int ans = 0, sum = 0;
        dfs(root, ans, sum);
        return ans;
    }

    void dfs(TreeNode* root , int& ans, int sum){
        if(!root)
            return;
        sum <<= 1; 
        sum |= root->val; 
        if(!root->left && !root->right){
           ans += sum;
           return;
        }
        dfs(root->left, ans, sum);
        dfs(root->right, ans, sum);
    }
};