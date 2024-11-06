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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int j,k;
        if(p!=NULL && q!=NULL){
            
            if(p->val==q->val){

                j=isSameTree(p->left,q->left);
                k=isSameTree(p->right,q->right);

                if(j==1 && k==1){
                    return 1;
                }
                else{
                    return 0;
                }
            }
            else{
                return 0;
            }
        }
        else{

            if(p==NULL && q==NULL){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
};