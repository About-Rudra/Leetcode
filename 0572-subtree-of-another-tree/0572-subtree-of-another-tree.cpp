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

    bool isSameTree(TreeNode* p, TreeNode* q) {
    // Both null → same
    if (p == nullptr && q == nullptr) return true;
    
    // One null, one not → different
    if (p == nullptr || q == nullptr) return false;
    
    // Values don't match → different
    if (p->val != q->val) return false;
    
    // Recursively check left and right subtrees
    return isSameTree(p->left, q->left) && 
           isSameTree(p->right, q->right);
}

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if (subRoot == nullptr) return true;  // Empty tree is always a subtree
    if (root == nullptr) return false; 

         if (isSameTree(root, subRoot)) {
        return true;  // Found matching subtree!
    }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);


        

    }
};