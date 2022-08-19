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
    bool helper(TreeNode* root,long low ,long high){
        // Empty trees are valid BSTs.
        if(root == NULL){
            return true;
        }
          return ((root->val < high) && (root->val > low)&&helper(root->left, low, root->val) && helper(root->right, root->val, high));
        
    }
    
    bool isValidBST(TreeNode* root) {
        bool ans = helper(root, LONG_MIN, LONG_MAX);
        return ans;
    }
};