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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> ans;
         if(root == NULL) return {};
        s.push(root);
        while(s.empty()== false)
        {
            TreeNode* a = s.top();
            ans.push_back(a->val);
            s.pop();
            if(a->right)
            {
                s.push(a->right);
            }
            if(a->left)
            {
                s.push(a->left);
            }
            
        }
        return ans;
            
    }
};