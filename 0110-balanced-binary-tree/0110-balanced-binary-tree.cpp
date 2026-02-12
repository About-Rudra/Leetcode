class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
    
    int checkHeight(TreeNode* node) {
        // Base case: empty tree is balanced
        if(node == nullptr) return 0;
        
        // Post-order: Check left, then right, then current
        int leftHeight = checkHeight(node->left);
        if(leftHeight == -1) return -1;  // Left subtree unbalanced
        
        int rightHeight = checkHeight(node->right);
        if(rightHeight == -1) return -1; // Right subtree unbalanced
        
        // Current node: check if balanced
        if(abs(leftHeight - rightHeight) > 1) return -1;
        
        // Return height
        return max(leftHeight, rightHeight) + 1;
    }
};