/* URL: https://leetcode.com/problems/binary-tree-inorder-traversal/ */

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
public:
   void help_inorder(TreeNode* root, vector<int>&res)
    {
        if(root->left) help_inorder(root->left,res);
        res.push_back(root->val);
        if(root->right) help_inorder(root->right,res);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        if(!root) return res;
        help_inorder(root, res);
        return res;
    }
};
