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
vector<string>v;
map<string,int>mp;
    void dfs(TreeNode*root,string s){
        if(!root)return;
        if(root&&!root->left&&!root->right){
            s+=to_string(root->val);
            if(!mp[s]){
            mp[s]=1;
            v.push_back(s);
             }
             return;
        }
        s+=to_string(root->val);
        s+="->";
        dfs(root->left,s);
        dfs(root->right,s);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root,"");
  return v;      
    }
};