/**
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode *root) {
        if(root == nullptr)
        	return 0;
        if(root->left == nullptr && root->right == nullptr)
        	return 1;
        if(root->left == nullptr)
        	return minDepth(root->right)+1;
        if(root->right == nullptr)
        	return minDepth(root->left)+1;

        int left = minDepth(root->left);
        int right = minDepth(root->right);
        return left<=right?(left+1):(right+1);
    }
};