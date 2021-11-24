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
    
    int ans=0;
    int ans2= 1;
    void dfs(TreeNode* root,int direction){
        
        if(root==NULL) return;
        if(direction== -1)
        ans = root->val;
        
        if(ans != root->val)
            ans2=0;
        
        
        dfs(root->left,0);
        dfs(root->right,1);
    }
    bool isUnivalTree(TreeNode* root) {
        dfs(root,-1);
        std:cout<<ans2;
        return ans2;
    }
};