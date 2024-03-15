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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> que;
        que.push(root);
        int level = 0;
        while(!que.empty()){
            int evenOdd = level & 1; 
            int prevNum = evenOdd ? INT_MAX : INT_MIN;
            for(size_t i = 0, sz = que.size(); i < sz; ++i){
                auto node = que.front();
                que.pop(); 
                int val = node->val;
                if((val & 1) == evenOdd)return false;
                if((!evenOdd && val <= prevNum) || (evenOdd && val >= prevNum))return false;
                prevNum = val;
                if(node->left)que.push(node->left);
                if(node->right)que.push(node->right);
            }
            level++;
        }
        return true;
    }
};