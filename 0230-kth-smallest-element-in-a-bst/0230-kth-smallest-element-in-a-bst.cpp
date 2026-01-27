class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        return inorder(root, k);
    }
    
private:
    int inorder(TreeNode* node, int& k) {
        if(node == nullptr) return -1;
        
        // Left subtree
        int left = inorder(node->left, k);
        if(k == 0) return left;  // Found in left subtree
        
        // Current node
        k--;
        if(k == 0) return node->val;
        
        // Right subtree
        return inorder(node->right, k);
    }
};