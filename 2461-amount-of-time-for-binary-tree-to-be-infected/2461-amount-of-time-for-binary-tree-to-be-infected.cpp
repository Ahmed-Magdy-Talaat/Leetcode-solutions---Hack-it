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
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>parent;
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode*temp;
        while(!q.empty()){
            TreeNode*cur=q.front();
            q.pop();
            if(cur->val==start){
                temp=cur;
            }
            if(cur->left){
            q.push(cur->left);
            parent[cur->left]=cur;
            }
          if(cur->right){
            q.push(cur->right);
            parent[cur->right]=cur;
            }
            }
        q.push(temp);
        visited[temp]=1;
        int level=-1;
       // if(root&&!root->left&&!root->right)return 0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*cur=q.front();q.pop();
                if(cur->left&&!visited[cur->left])
                {   q.push(cur->left);
                    visited[cur->left]=1;
                }

                if(cur->right&&!visited[cur->right])
                {   q.push(cur->right);
                    visited[cur->right]=1;
                }

                if(parent[cur]&&!visited[parent[cur]])
                {   q.push(parent[cur]);
                    visited[parent[cur]]=1;
                }

            }
                level++;

        
        }
        
        return level;


            }
        
};