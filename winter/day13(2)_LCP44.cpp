/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    unordered_map<int, int> map;
public:
    int numColor(TreeNode* root) {
        dfs(root); 
        return map.size();
    }
    void dfs(TreeNode* root){
        if(root){
            map[root->val]++;
            dfs(root->left);
            dfs(root->right);
        }
    }
};