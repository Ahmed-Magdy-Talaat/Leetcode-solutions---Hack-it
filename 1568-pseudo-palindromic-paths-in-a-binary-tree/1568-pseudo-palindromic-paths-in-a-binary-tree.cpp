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
    int c=0;

    void dfs(TreeNode*root,int count){
        if(!root)return;
        count^=1<<(root->val-1);
        if(!root->left&&!root->right){
            if((count&(count-1))==0)c++;
            return;
        }
        dfs(root->left,count);
        dfs(root->right,count);
    }

    int pseudoPalindromicPaths (TreeNode* root) {
        dfs(root,0);
        return c;
    }
};