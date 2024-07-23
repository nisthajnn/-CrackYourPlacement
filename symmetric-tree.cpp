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
    bool solve(TreeNode* lefti,TreeNode* righti)
    {
        if(!lefti and righti)
        return false;
        if(!righti and lefti)
        return false;
        if(!lefti and !righti)
        return true;
        if(lefti->val==righti->val and (solve(lefti->left,righti->right) and 
        solve(lefti->right,righti->left)))
        return true;
        else
        return false;
                
    }
    bool isSymmetric(TreeNode* root)
    {
        if(!root)
        return true;
        return solve(root->left,root->right);    
    }
};
