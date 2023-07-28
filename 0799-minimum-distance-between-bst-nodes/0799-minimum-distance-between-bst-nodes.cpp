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
    vector<int>arr;
    void dfs(TreeNode*root){
        if(!root)return;
        dfs(root->left);
        arr.push_back(root->val);
        dfs(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        int mn=INT_MAX;
        dfs(root);
        for(int i=1;i<arr.size();i++){
            mn=min(abs(arr[i]-arr[i-1]),mn);
        }
    
    return mn;
    }
};