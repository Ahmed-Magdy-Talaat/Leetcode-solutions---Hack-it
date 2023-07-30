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
    int sum=0;
       map<int,int>parent;
    void dfs(TreeNode*root,int parent,int grand){
        if(!root)return;
        if(grand!=0&&grand%2==0)sum+=root->val;
        dfs(root->left,root->val,parent);
        dfs(root->right,root->val,parent);
    }
    int sumEvenGrandparent(TreeNode* root) {
         dfs(root,0,0);
         return sum;
    }
};