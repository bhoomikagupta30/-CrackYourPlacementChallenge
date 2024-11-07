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

    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v1;
        helper(root,v1);
        return v1;
        
    }

    void helper(TreeNode *root,vector<int>&v1){

        if(root!=NULL){

            helper(root->left,v1);
            v1.push_back(root->val);
            helper(root->right,v1);




        }
    }
};