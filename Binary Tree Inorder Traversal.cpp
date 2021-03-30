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
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> ans;
        stack<TreeNode*> s;
        while(true)
        {
            while(root)
            {
                s.push(root);
                root=root->left;
            }
            if(s.empty())
            {
                return ans;
            }
            else
            {
                TreeNode * temp= new TreeNode();
                temp=s.top();
                s.pop();
                ans.push_back(temp->val);
                root=temp->right;
            }
        }

    }
};//
// Created by Daksh on 30-03-2021.
//

