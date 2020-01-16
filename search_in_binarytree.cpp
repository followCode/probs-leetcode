/* URL: https://leetcode.com/problems/search-in-a-binary-search-tree/ */

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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL)
            return NULL;
        else if(root->val== val)
            return root;
        else{
            TreeNode *p=NULL, *q=NULL;
            p= searchBST(root->left,val);
            q= searchBST(root->right,val);
            if(p!=NULL)
                return p;
            else
                return q;
        }
    }
};
