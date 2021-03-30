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
    TreeNode* invertTree(TreeNode* root)
    {
        if(root == NULL)
        {
            return NULL;
        }

        TreeNode* tempr = new TreeNode();
        TreeNode* templ = new TreeNode();
        templ = invertTree(root->left);
        tempr = invertTree(root->right);

        root->left = tempr;
        root->right = templ;

        return root;

    }
};//
// Created by Daksh on 30-03-2021.
//

