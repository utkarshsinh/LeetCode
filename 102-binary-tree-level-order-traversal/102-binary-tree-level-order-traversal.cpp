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
    vector<vector<int>> levelOrder(TreeNode* root) {
      queue<TreeNode*> q;
        vector<vector<int>> v;
        
        if(root==NULL) return v;
        q.push(root);
        while(q.empty()==false)
        {
            int len = q.size();
            vector<int> result;
            for(int i=0; i<len; i++)
            {
                
            TreeNode* curr = q.front();
            q.pop();
            result.push_back(curr->val);
                
            if(curr->left!=NULL) q.push(curr->left);
            if(curr->right!=NULL) q.push(curr->right);
            }
            v.push_back(result);
            // result.clear();
            
        }
        return v;
    }
};