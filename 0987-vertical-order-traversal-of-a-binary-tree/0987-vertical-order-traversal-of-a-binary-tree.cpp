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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // Map: column -> map of row -> multiset of values
        // This gives us: sorted by column, then by row, and values in a row are sorted
        map<int, map<int, multiset<int>>> nodes;
        
        // Queue for BFS: (node, column, row)
        queue<tuple<TreeNode*, int, int>> q;
        q.push({root, 0, 0});
        
        while (!q.empty()) {
            auto [node, col, row] = q.front();
            q.pop();
            
            // Store node value at its (column, row) position
            nodes[col][row].insert(node->val);
            
            // Process children with updated coordinates
            if (node->left) {
                q.push({node->left, col - 1, row + 1});
            }
            if (node->right) {
                q.push({node->right, col + 1, row + 1});
            }
        }
        
        // Build the result
        vector<vector<int>> result;
        for (auto& [col, rows] : nodes) {
            vector<int> column;
            for (auto& [row, values] : rows) {
                // Insert all values from this (col, row) position
                column.insert(column.end(), values.begin(), values.end());
            }
            result.push_back(column);
        }
        
        return result;
    }
};