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
    map<TreeNode*,int>mp;
    int depth(TreeNode*root){
        if(!root)return 0;
        mp[root]=max(1+depth(root->left),depth(root->right)+1);
        return mp[root];
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        if(!root)return NULL;
        int l=depth(root->left);
        int r=depth(root->right);
        if(l==r)
        return root;
        else if(l<r)
            return lcaDeepestLeaves(root->right);
        else
            return lcaDeepestLeaves(root->left);
    }
};