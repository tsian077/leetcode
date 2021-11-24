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
    
    void dfs(TreeNode* root,int direction)
    {
        if(root == NULL) return;
        std::cout<<root->val;
        
        //left node 
        if(direction==0){
            
            if(root->right == NULL && root->left == NULL)
                 ans += root->val;
            
        }
        
            
            //left leaf
            
           
        
        
        dfs(root->left,0); //left direction
        dfs(root->right,1); //right direction
    } 
    
    
    int sumOfLeftLeaves(TreeNode* root) {
       dfs(root,-1);
        
       
            
            
        return ans;
    }
    
   
};