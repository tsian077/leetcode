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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
        if(!root){
            return NULL;
        }
        else if(key > root-> val){
            cout<<"key bigger than left"<<root->val;
            cout<<" "<<"key:"<<key;
            root->right = deleteNode(root->right,key);
            
        }
        else if(key < root -> val){
            cout<<"key bigger than right"<<root->val;
            cout<<" "<<"key"<<key;
            root-> left = deleteNode(root->left,key);
            
        }
        else{
            // cout<<"hello";
            if(root->left == NULL){
                return root->right;
            }
            else if(root-> right == NULL){
                return root -> left;
            }
            cout<<"\n";
            cout<<"root的左"<<root->left->val<<"\n";
            cout<<"root的右"<<root->right->val<<"\n";
            TreeNode* successor = root->right;  //現在要刪除的值在root，因此新增一個用來暫存的root的右節點     
            while(successor->left)              //先處理左節點
                //當root的右節點的左節點有數值的時，則將暫存更改成左邊的節點
                successor = successor->left;
            cout<<"successor:"<<successor->val;
            root->val = successor->val;             //將暫存的值(root的右節點)給予當前要刪除的root。
            
            
            root->right = deleteNode(root->right, successor->val);   // delete the successor node
            // (透過遞迴的方式，開始位移右節點的數值)
            
        }
        
        return root;
        
    }
};