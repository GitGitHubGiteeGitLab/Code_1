/*************************************************************************
	> File Name: leetcode701.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu Apr 25 23:46:41 2024
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
    //TreeNode* insertIntoBST(TreeNode* root, int val) 
    //{
    //    if(root == nullptr)
    //        return new TreeNode(val);
    //    
    //    if(root->val < val)//val应该insert到right subtree
    //        root->right = insertIntoBST(root->right, val);
    //    else if(root->val > val)//val应该insert到left subtree
    //        root->left = insertIntoBST(root->left, val);
    //    else 
    //        ;
    //        
    //    return root;
    //}
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
        if(root == nullptr)
            return new TreeNode(val);

        TreeNode* parent = nullptr;
        TreeNode* cur = root;
        while(cur){
            if(cur->val < val){
                parent = cur;
                cur = cur->right;
            }
            else if(cur->val > val){
                parent = cur;
                cur = cur->left;
            }
            else 
                ;
        }
        cur = new TreeNode(val);
        if(parent->val < val)
            parent->right = cur;
        else 
            parent->left = cur;
        return root;
    }
};
