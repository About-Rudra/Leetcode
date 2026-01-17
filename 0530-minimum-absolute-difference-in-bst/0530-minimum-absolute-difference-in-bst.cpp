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

// Method 1: Inorder Traversal with Global Variables (Most Efficient)
class Solution {
public:
    int getMinimumDifference(TreeNode* root) {
        int minDiff = INT_MAX;
        TreeNode* prev = nullptr;
        inorder(root, prev, minDiff);
        return minDiff;
    }
    
private:
    void inorder(TreeNode* node, TreeNode*& prev, int& minDiff) {
        if(node == nullptr) return;
        
        // Traverse left subtree
        inorder(node->left, prev, minDiff);
        
        // Process current node
        if(prev != nullptr) {
            minDiff = min(minDiff, abs(node->val - prev->val));
        }
        prev = node;
        
        // Traverse right subtree
        inorder(node->right, prev, minDiff);
    }
};