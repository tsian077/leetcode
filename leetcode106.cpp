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
//inorder(前序)左中右
//postorder(後序)左右中
//先用後序找出root，並將前序儲存到一個unordered_map，透過for loop給予index，之後透過遞迴的方式，分別建立每一個subtree 透過idx--來找出root(idx用來指向root的位置，可以透過從後序由後往前找到)，並從之前儲存的unordered_map中找出當前root在inorder中的位置，而遞迴則是往左與往右方別去建立其子樹。
class Solution {
public:
    unordered_map<int, int>mp; // Stores (node -> index in inorder array)
    
    TreeNode* make_tree(int start, int end, int &idx, vector<int>& postorder, vector<int>& inorder){
        
		// If range for inorder is NOT valid then return NULL
        if(start > end) return NULL;
        
		// Create a node for our root node of current subtree
        TreeNode* root = new TreeNode(postorder[idx]);
        
		// Find position of current root in inorder array
        int i = mp[root->val];
		
		// Decrement our pointer to postorder array for our next upcoming root if any
        idx--;
		
		// Make a call to create right subtree, inorder range [i+1, end]
        root->right = make_tree(i+1, end, idx, postorder, inorder);
		
		// Make a call to create left subtree, inorder range [start, i-1]
        root->left = make_tree(start, i-1, idx, postorder, inorder);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int idx=postorder.size()-1;
        
		// Create (nodes -> index of inorder array) mapping
        for(int i{}; i<inorder.size(); ++i){
            cout<<inorder[i]<<" ";
            
            
            mp[inorder[i]] = i;
        }
        
        return make_tree(0,inorder.size()-1,idx,postorder,inorder);
        
        
         
    }
    
};