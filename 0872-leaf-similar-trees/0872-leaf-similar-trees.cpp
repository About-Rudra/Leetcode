class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        
        dfs(root1, leaves1);
        dfs(root2, leaves2);
        
        return leaves1 == leaves2;
    }
    
private:
    void dfs(TreeNode* node, vector<int>& leaves) {
        if (!node) return;
        
        // Leaf node
        if (!node->left && !node->right) {
            leaves.push_back(node->val);
            return;
        }
        
        dfs(node->left, leaves);
        dfs(node->right, leaves);
    }
};