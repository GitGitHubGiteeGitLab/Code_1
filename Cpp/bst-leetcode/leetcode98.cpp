/*************************************************************************
	> File Name: leetcode98.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat Apr 27 21:42:32 2024
 ************************************************************************/

#include<iostream>
using namespace std;
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
class Solution 
{
public:

    //bool dfs(TreeNode* root, long lower, long upper)
    //{
    //    if(!root)
    //        return true;
    //    
    //    if(root->val <= lower || root->val >= upper)
    //        return false;
    //    return dfs(root->left, lower, root->val) &&
    //           dfs(root->right, root->val, upper);
    //    
    //}
    //
    //bool isValidBST(TreeNode* root) 
    //{
    //    return dfs(root, LONG_MIN, LONG_MAX);
    //}

    bool isValidBST(TreeNode* root) 
    {
        if(!root)
            return true;
        TreeNode* pre = nullptr;
        TreeNode* cur = root;
        stack<TreeNode*> st;
        while(cur || !st.empty()){
            while(cur){
                st.push(cur);
                cur = cur->left;
            } 

            cur = st.top();
            st.pop(); 
            if(pre && pre->val >= cur->val )
                return false;

            pre = cur;
            cur = cur->right;
        }
        return true;
    }
};
