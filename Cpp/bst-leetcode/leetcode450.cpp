/*************************************************************************
	> File Name: leetcode450.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri Apr 26 19:21:45 2024
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
    //TreeNode* deleteNode(TreeNode* root, int key) 
    //{
    //    if(root == nullptr)
    //        return nullptr;
    //    
    //    if(root->val < key) // key在right subtree
    //        root->right = deleteNode(root->right, key);
    //    else if(root->val > key)
    //        root->left = deleteNode(root->left, key);
    //    else{
    //        if(!root->left && !root->right){ //  0 child
    //            delete root;
    //            root = nullptr;
    //        }
    //        else if(root->left && root->right){ //2 children
    //            TreeNode* tmp = root->left;
    //            while(tmp->right)
    //                tmp = tmp->right;
    //            root->val = tmp->val;
    //            root->left = deleteNode(root->left, root->val);
    //        }
    //        else if(root->left){ // 1 child
    //            TreeNode* tmp = root->left;
    //            delete root;
    //            root =  tmp;
    //        }
    //        else { // 1 child
    //            TreeNode* tmp = root->right;
    //            delete root;
    //            root =  tmp;
    //        }
    //    }
    //    return root;
    //}
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        if(!root)
            return nullptr;

        TreeNode* parent = nullptr;
        TreeNode* cur = root; 

        while(cur){
            if(cur->val < key){
                parent = cur;
                cur = cur->right;
            }
            else if(cur->val > key){
                parent = cur;
                cur = cur->left;
            }
            else{
                if(cur->left && cur->right){
                    TreeNode* tmp = cur;
                    parent = tmp;
                    cur = cur->right;
                    while(cur->left){
                        parent = cur;
                        cur = cur->left;
                    }

                    tmp->val = cur->val;
                    if(parent == tmp)
                        parent->right = cur->right;
                    else
                        parent->left = cur->right;
                    
                    delete cur;
                    return root;
                }
                else if(cur->left){
                    if(cur == root){
                        root = root->left;
                        delete cur;
                    }
                    else{
                        if(parent->left == cur)
                            parent->left = cur->left;
                        else
                            parent->right = cur->left;
                        delete cur;
                    }
                    return root;
                }
                else if(cur->right){
                    if(cur == root){
                        root = root->right;
                        delete cur;
                    }
                    else{
                        if(parent->left == cur)
                            parent->left = cur->right;
                        else
                            parent->right = cur->right;
                        delete cur;
                    }

                    return root;
                }
                else{
                    if(cur == root){
                        delete root;
                        return nullptr;
                    }
                    else{
                        if(parent->left == cur) 
                            parent->left = nullptr;
                        else   
                            parent->right = nullptr;
                        delete cur;
                        return root;
                    }
                         
                }
            }
        }
        return root;

    }
};
