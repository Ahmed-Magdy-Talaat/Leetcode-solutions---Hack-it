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
    int minDepth(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int d=1;
        while(!q.empty()){
           
            int sz=q.size();
            while(sz--){
                 TreeNode *cur=q.front();
                 q.pop();
            if(!cur)continue;
            if(!cur->left&&!cur->right)return d;
            q.push(cur->left);
            q.push(cur->right);
        }
        d++;
        }
        return d;
        
    }
};