/*************************************************************************
	> File Name: leetcode110.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun Apr 28 23:36:27 2024
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
    //bool isBalanced(TreeNode* root) 
    //{
    //    return _isBalanced(root);
    //}
//
    //bool _isBalanced(TreeNode* root)
    //{
    //    if(!root)
    //        return true;
    //    int lh = _height(root->left);
    //    int rh = _height(root->right);
//
    //    return abs(lh - rh) <= 1     &&
    //        _isBalanced(root->left) &&
    //        _isBalanced(root->right);
    //} 
//
    //int _height(TreeNode* root)
    //{
    //    if(!root)
    //        return 0; 
    //    int lh = _height(root->left);
    //    int rh = _height(root->right);
    //    return (rh > lh) ? rh + 1 : lh + 1;
    //}
    bool isBalanced(TreeNode* root) 
    {
        return _height(root) != -1;
    }

    int _height(TreeNode* root)
    {
        if(!root)
            return 0;

        int lh = _height(root->left); 
        int rh = _height(root->right); 



        if(lh == -1 || rh == -1 || abs(lh - rh) > 1)
            return -1;
        else
            return max(lh, rh) + 1;
    }
};
