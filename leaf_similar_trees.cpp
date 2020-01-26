/*  URL: https://leetcode.com/problems/leaf-similar-trees/ */

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
    void inorderLeaves(TreeNode * root, vector<int> & v){
        if(root==NULL)
            return;
        else if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            return;
        }
        inorderleaves(root->left,v);
        inorderleaves(root->right,v);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        vector<int> v2;
        inorderleaves(root1,v1);
        inorderleaves(root2,v2);
        return v1==v2;
    }
};
