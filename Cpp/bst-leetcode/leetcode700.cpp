/*************************************************************************
	> File Name: leetcode700.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Apr 25 23:32:32 2024
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
class Solution {
public:
    //TreeNode* searchBST(TreeNode* root, int val) 
    //{
    //    if(root == nullptr || root->val == val)
    //        return root;
    //    else if(root->val < val) //val 在 right subtree
    //        return searchBST(root->right, val);
    //    else //val 在 left subtree
    //        return searchBST(root->left, val);
    //}
    TreeNode* searchBST(TreeNode* root, int val) 
    {
        if(root == nullptr)
            return nullptr;
        TreeNode* cur = root;    
        while(cur){
            if(cur->val < val) // val 在 right subtree
                cur = cur->right;
            else if(cur->val > val) //val 在 right subtree
                cur = cur->left;
            else   
                return cur;
        }
        return nullptr;
    }
};
