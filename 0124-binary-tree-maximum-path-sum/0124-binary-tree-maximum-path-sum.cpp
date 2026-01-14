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

    int maxpathdown(TreeNode* root,int &maxi){

        if(root == nullptr) return 0;

        int leftsum = max(0, maxpathdown(root->left, maxi));
        int rightsum = max(0, maxpathdown(root->right, maxi));

         maxi = max(maxi, root->val + leftsum + rightsum);

        return max(leftsum, rightsum) + root->val;
    };

    int maxPathSum(TreeNode* root) {

        int maxi = INT_MIN;
        maxpathdown(root, maxi);
        return maxi;
        
    }
};